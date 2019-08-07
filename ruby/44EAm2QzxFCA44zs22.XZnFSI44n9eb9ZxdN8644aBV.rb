
        
                def extract_heredoc(node)
          return node if heredoc_node?(node)
          return node.receiver if single_line_send_with_heredoc_receiver?(node)
    
              check(node, node.arguments, 'parameter of %<article>s method call',
                node.last_argument.source_range.end_pos,
                node.source_range.end_pos)
        end
        alias on_csend on_send
    
              expect_offense(<<~RUBY)
            def some_method(foo)
                            ^^^ #{message}
              binding(:something)
            end
          RUBY
        end
      end
    end
  end
    
      context 'when a variable is assigned and referenced when defining a module' do
    it 'does not register an offense' do
      expect_no_offenses(<<~RUBY)
        x = Object.new
        module x::Foo
        end
      RUBY
    end
  end
    
            rhs
      end
    end
  end
end

    
    RSpec.describe RuboCop::Cop::Lint::UnifiedInteger, :config do
  subject(:cop) { described_class.new(config) }
    
    def with_logging(lvl=Logger::DEBUG)
  old = Sidekiq.logger.level
  begin
    Sidekiq.logger.level = lvl
    yield
  ensure
    Sidekiq.logger.level = old
  end
end

    
      def app
    Sidekiq::Web
  end
    
          describe 'failed' do
        it 'retrieves hash of dates' do
          Sidekiq.redis do |c|
            c.incrby('stat:failed:2012-12-24', 4)
            c.incrby('stat:failed:2012-12-25', 1)
            c.incrby('stat:failed:2012-12-26', 6)
            c.incrby('stat:failed:2012-12-27', 2)
          end
          Time.stub(:now, Time.parse('2012-12-26 1:00:00 -0500')) do
            s = Sidekiq::Stats::History.new(2)
            assert_equal ({ '2012-12-26' => 6, '2012-12-25' => 1 }), s.failed
    
        assert_nil dead_set.find_job('000101')
    assert dead_set.find_job('000102')
    assert dead_set.find_job('000103')
  end
end

    
          e = assert_raises ArgumentError do
        Sidekiq.on(:startp)
      end
      assert_match(/Invalid event name/, e.message)
      e = assert_raises ArgumentError do
        Sidekiq.on('startup')
      end
      assert_match(/Symbols only/, e.message)
      Sidekiq.on(:startup) do
        1 + 1
      end
    
        ## Write the results to a file
    ## Requires railsexpress patched MRI build
    # brew install qcachegrind
    #File.open('callgrind.profile', 'w') do |f|
      #RubyProf::CallTreePrinter.new(result).print(f, :min_percent => 1)
    #end
  end
end