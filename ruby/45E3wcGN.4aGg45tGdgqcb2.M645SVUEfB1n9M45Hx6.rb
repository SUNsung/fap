
        
        class Jekyll::Commands::NewTheme < Jekyll::Command
  class << self
    def init_with_program(prog)
      prog.command(:'new-theme') do |c|
        c.syntax 'new-theme NAME'
        c.description 'Creates a new Jekyll theme scaffold'
        c.option 'code_of_conduct', \
          '-c', '--code-of-conduct', \
          'Include a Code of Conduct. (defaults to false)'
    
          message = TestMailer.send_test(args[:to_address])
      Email::Sender.new(message, :test_message).send
    end
    
    
    {    # @include transition(#{border-color ease-in-out .15s, box-shadow ease-in-out .15s})
    # to
    # @include transition(border-color ease-in-out .15s, box-shadow ease-in-out .15s)
    def deinterpolate_vararg_mixins(scss)
      scss = scss.dup
      VARARG_MIXINS.each do |mixin|
        if scss.gsub! /(@include\s*#{Regexp.quote(mixin)})\(\s*\#\{([^}]+)\}\s*\)/, '\1(\2)'
          log_transform mixin
        end
      end
      scss
    end
    
      # The test environment is used exclusively to run your application's
  # test suite. You never need to work with it otherwise. Remember that
  # your test database is 'scratch space' for the test suite and is wiped
  # and recreated between test runs. Don't rely on the data there!
  config.cache_classes = true