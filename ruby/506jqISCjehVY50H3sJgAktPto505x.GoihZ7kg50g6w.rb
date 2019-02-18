
        
          def pinned_version
    Keg.new(path.resolved_path).version if pinned?
  end
end

    
            -> { w.f4('', 0) }.should output(nil, %r|core/kernel/fixtures/classes.rb:#{w.warn_call_lineno}: warning: \n$|)
        -> { w.f4(nil, 0) }.should output(nil, %r|core/kernel/fixtures/classes.rb:#{w.warn_call_lineno}: warning: \n$|)
      end
    
    When /^I (?:log|sign) out$/ do
  logout
  step 'I go to the root page'
end
    
            self
      end