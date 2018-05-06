
        
        end

    
      it 'decodes the remaining floats when passed the '*' modifier' do
    array = '\x9a\x999@33\xb3?33\x03A'.unpack(unpack_format('*'))
    array.should == [2.9000000953674316, 1.399999976158142, 8.199999809265137]
  end
    
      it 'runs nested ensure clauses' do
    ScratchPad.record []
    @outer = Thread.new do
      begin
        @inner = Thread.new do
          begin
            sleep
          ensure
            ScratchPad << :inner_ensure_clause
          end
        end
        sleep
      ensure
        ScratchPad << :outer_ensure_clause
        @inner.send(@method)
        @inner.join
      end
    end
    Thread.pass while @outer.status and @outer.status != 'sleep'
    Thread.pass until @inner
    Thread.pass while @inner.status and @inner.status != 'sleep'
    @outer.send(@method)
    @outer.join
    ScratchPad.recorded.should include(:inner_ensure_clause)
    ScratchPad.recorded.should include(:outer_ensure_clause)
  end
    
        t.join
  end
    
          time.sec.should == 0
      time.min.should == 0
      time.hour.should == 0
      time.day.should == 1
      time.month.should == 7
    end
  end
end

    
    end
    
            def print_version
          output_pipe.puts 'version: '#{Pod::VERSION}''
        end
    
            def show
          authorize! :read, @order, order_token
          @address = find_address
          respond_with(@address)
        end
    
          expect('.margin-false-third').to have_ruleset(ruleset)
      expect('.margin-false-third').to_not have_rule(bad_rule)
    end
  end
end

    
          expect('.size-auto').to have_ruleset(rule)
    end
  end
end
