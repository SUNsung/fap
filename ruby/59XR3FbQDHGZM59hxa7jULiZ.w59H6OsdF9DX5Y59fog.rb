
        
        BASE_URI = ENV['BASE_URI'] || 'https://github.com/jondot/awesome-react-native'
    
    if $PROGRAM_NAME == __FILE__ && !ENV['COCOAPODS_NO_BUNDLER']
  ENV['BUNDLE_GEMFILE'] = File.expand_path('../../Gemfile', __FILE__)
  require 'rubygems'
  require 'bundler/setup'
  $LOAD_PATH.unshift File.expand_path('../../lib', __FILE__)
elsif ENV['COCOAPODS_NO_BUNDLER']
  require 'rubygems'
  gem 'cocoapods'
end
    
          def initialize(argv)
        @podfile_path = Pathname.pwd + 'Podfile'
        @project_path = argv.shift_argument
        @project_paths = Pathname.pwd.children.select { |pn| pn.extname == '.xcodeproj' }
        super
      end
    
            def self.options
          [
            ['--template-url=URL', 'The URL of the git repo containing a ' \
                                  'compatible template'],
          ].concat(super)
        end
    
      # Implemented by subclasses to define Rake tasks. Typically a plugin will call
  # `eval_rakefile` to load Rake tasks from a separate .rake file.
  #
  # Example:
  #
  #   def define_tasks
  #     eval_rakefile File.expand_path('../tasks.rake', __FILE__)
  #   end
  #
  # For simple tasks, you can define them inline. No need for a separate file.
  #
  #   def define_tasks
  #     desc 'Do something fantastic.'
  #     task 'my_plugin:fantastic' do
  #       ...
  #     end
  #   end
  #
  def define_tasks; end
    
      desc 'Rollback to previous release.'
  task :rollback do
    %w{ starting started
        reverting reverted
        publishing published
        finishing_rollback finished }.each do |task|
      invoke 'deploy:#{task}'
    end
  end
end
    
      mkdir_p tasks_dir