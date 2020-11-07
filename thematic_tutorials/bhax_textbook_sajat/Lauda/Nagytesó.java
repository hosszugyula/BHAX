public aspect Nagytesó {
    before(): call(* *(..)) && !cflow(adviceexecution()) {
        System.out.println("Nagyteso> " + thisJoinPointStaticPart.getSourceLocation());
        System.out.println("Nagyteso> " + thisJoinPointStaticPart.getKind());
        System.out.println("Nagyteso> " + thisJoinPointStaticPart.getSignature());
    }
}
