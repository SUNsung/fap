
        
              it 'detects closing brace on different line from last element' do
        src = construct(false, true)
        inspect_source(src)