
        
              def find_matching_tag(tag)
        # Used primarily by developers testing beta macOS releases.
        if OS::Mac.prerelease? && ARGV.skip_or_later_bottles?
          generic_find_matching_tag(tag)
        else
          generic_find_matching_tag(tag) ||
            find_older_compatible_tag(tag)
        end
      end
    
        it 'formula path shortcut : man' do
      expect_offense(<<~'RUBY')
        class Foo < Formula
          desc 'foo'
          url 'https://brew.sh/foo-1.0.tgz'
          def install
            mv '#{share}/man', share
                         ^^^^ '#{share}/man' should be '#{man}'
          end
        end
      RUBY
    end
    
          before do
        allow(subject).to receive(:possible_javas).and_return([java])
      end
    
            uses_from_macos('foo', after: :mojave)
      end
    
        attr_reader :force
    attr_accessor :downloaded_path
    
          p = Sidekiq::Processor.new(mgr)
      JoeWorker.perform_async(0)
    
            begin
          Component.new.handle_exception exception
          pass
        rescue StandardError
          flunk 'failed handling a nil backtrace'
        end
      end
    end
  end
    
      describe 'error handling' do
    it 'deals with user-specified error handlers which raise errors' do
      output = capture_logging do
        begin
          Sidekiq.error_handlers << proc {|x, hash|
            raise 'boom'
          }
          cli = Sidekiq::CLI.new
          cli.handle_exception(RuntimeError.new('hello'))
        ensure
          Sidekiq.error_handlers.pop
        end
      end
      assert_includes output, 'boom'
      assert_includes output, 'ERROR'
    end
  end
    
      describe '#name' do
    it { expect(instance.name).to eq 'wemux' }
  end
    
      it 'creates an instance' do
    expect(subject).to be_a(Tmuxinator::Pane)
  end
    
          it 'returns true' do
        expect(described_class.editor?).to be_truthy
      end
    end