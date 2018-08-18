
        
        Each recognizer pulls its input from one of the stream classes below. Streams
handle stuff like buffering, look-ahead and seeking.
    
            Note that I.2 R.2-2 will wipe out I.2 even though, technically, the
        inserted stuff would be before the replace range.  But, if you
        add tokens in front of a method body '{' and then delete the method
        body, I think the stuff before the '{' you added should disappear too.
    }
    }