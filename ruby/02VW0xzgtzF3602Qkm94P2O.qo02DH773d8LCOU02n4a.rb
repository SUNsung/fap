
        
              def _find_all(path, prefixes, args, outside_app)
        prefixes = [prefixes] if String === prefixes
        prefixes.each do |prefix|
          paths.each do |resolver|
            if outside_app
              templates = resolver.find_all_anywhere(path, prefix, *args)
            else
              templates = resolver.find_all(path, prefix, *args)
            end
            return templates unless templates.empty?
          end
        end
        []
      end
    
    map = {}
dups = []
    
    unless invalids.empty?
  puts '\n\nFailed links:'
  invalids.each do |link|
    puts '- #{link}'
  end
  puts 'Done with errors.'
  exit(1)
end
    
        select_agent_type('Trigger Agent')
    fill_in(:agent_name, with: 'Test Trigger Agent')
    click_on 'Save'
    
          it 'handles signals' do
        @agent_runner.instance_variable_set(:@signal_queue, ['TERM'])
        @agent_runner.run
      end
    end
    
      it 'transfers control to the innermost catch block waiting for the same sympol' do
    one = two = three = 0
    catch :duplicate do
      catch :duplicate do
        catch :duplicate do
          one = 1
          throw :duplicate
        end
        two = 2
        throw :duplicate
      end
      three = 3
      throw :duplicate
    end
    [one, two, three].should == [1, 2, 3]
  end
    
            -> { w.f4(0.1) }.should output(nil, %r|classes.rb:#{w.warn_call_lineno}:|)
        -> { w.f4(Rational(1, 2)) }.should output(nil, %r|classes.rb:#{w.warn_call_lineno}:|)
      end
    
          alias react deny
    
        post('/', {'csrf_param' => token}, 'rack.session' => {:csrf => token})
    expect(last_response).to be_ok
  end