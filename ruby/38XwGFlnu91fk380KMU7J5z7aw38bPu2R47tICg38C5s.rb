
        
                command = 'security set-keychain-settings'
        command << ' -t #{params[:timeout]}' if params[:timeout]
        command << ' -l' if params[:lock_when_sleeps]
        command << ' -u' if params[:lock_after_timeout]
        command << ' #{keychain_path}'
    
                # Register the handler if this is our first callback.
            Signal.trap('INT') { fire_callbacks } if registered.length == 1
          end
        end
    
      def test_next_month__2
    d = Date.new(2000,1,31).next_month(-1)
    assert_equal([1999, 12, 31], [d.year, d.mon, d.mday])
    d = Date.new(2000,1,31).next_month
    assert_equal([2000, 2, 29], [d.year, d.mon, d.mday])
    d = Date.new(2000,1,31).next_month(12)
    assert_equal([2001, 1, 31], [d.year, d.mon, d.mday])
    d = Date.new(2000,1,31).next_month(13)
    assert_equal([2001, 2, 28], [d.year, d.mon, d.mday])
  end
    
    undef printf
alias printf printf_orig

    
    FIRST     = -> l { LEFT[RIGHT[l]] }
IF        = -> b { b }
LEFT      = -> p { p[-> x { -> y { x } } ] }
RIGHT     = -> p { p[-> x { -> y { y } } ] }
IS_EMPTY  = LEFT
REST      = -> l { RIGHT[RIGHT[l]] }
    
    mkpieces
mkboard
$p[4] = [$p[4][0]]
$pnum = (0...$p.length).to_a
setpiece([],0)

    
    module Capistrano
  module Doctor
    # Prints table of all Capistrano-related gems and their version numbers. If
    # there is a newer version of a gem available, call attention to it.
    class GemsDoctor
      include Capistrano::Doctor::OutputHelpers
    
          def stage_set?
        !!fetch(:stage, false)
      end
    
    module Capistrano
  module TaskEnhancements
    def before(task, prerequisite, *args, &block)
      prerequisite = Rake::Task.define_task(prerequisite, *args, &block) if block_given?
      Rake::Task[task].enhance [prerequisite]
    end
    
      # Implemented by subclasses to hook into Capistrano's deployment flow using
  # using the `before` and `after` DSL methods. Note that `register_hooks` will
  # not be called if the user has opted-out of hooks when installing the plugin.
  #
  # Example:
  #
  #   def register_hooks
  #     after 'deploy:updated', 'my_plugin:do_something'
  #   end
  #
  def register_hooks; end
    
      desc 'Started'
  task :started do
  end
    
      describe 'asking for a variable' do
    before do
      dsl.ask(:scm, :svn)
      $stdout.stubs(:print)
    end
    
        @buttons_list = %w(
      button
      [type='button']
      [type='reset']
      [type='submit']
    )
  end
    
      context 'called with arguments (2, $value: 4em 6em)' do
    it 'outputs sextuple the second value from the default scale' do
      expect('.two-double-value').to have_rule('font-size: 3.125em')
    end
  end
end
