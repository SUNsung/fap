
        
          protected
    
    class DeviseCreateUsers < ActiveRecord::Migration
  def change
    create_table(:users) do |t|
      t.string :email,              null: false
      t.string :encrypted_password, null: true
      t.timestamps null: false
    end
    
      module Mailers
    autoload :Helpers, 'devise/mailers/helpers'
  end
    
      class MissingWarden < StandardError
    def initialize
      super 'Devise could not find the `Warden::Proxy` instance on your request environment.\n' + \
        'Make sure that your application is loading Devise and Warden as expected and that ' + \
        'the `Warden::Manager` middleware is present in your middleware stack.\n' + \
        'If you are seeing this on one of your tests, ensure that your tests are either ' + \
        'executing the Rails middleware stack or that your tests are using the `Devise::Test::ControllerHelpers` ' + \
        'module to inject the `request.env['warden']` object for you.'
    end
  end
end

    
        def register_compass_extension
      ::Compass::Frameworks.register(
          'bootstrap',
          :version               => Bootstrap::VERSION,
          :path                  => gem_path,
          :stylesheets_directory => stylesheets_path,
          :templates_directory   => File.join(gem_path, 'templates')
      )
    end
    
          replace_rules file do |rule|
        replace_properties rule do |props|
          props.gsub /(?<!\w)([\w-]+):(.*?);/ do |m|
            prop, vals = $1, split_prop_val.call($2)
            next m unless vals.length >= 2 && vals.any? { |v| v =~ /^[\+\-]\$/ }
            transformed = vals.map { |v| v.strip =~ %r(^\(.*\)$) ? v : '(#{v})' }
            log_transform 'property #{prop}: #{transformed * ' '}', from: 'wrap_calculation'
            '#{prop}: #{transformed * ' '};'
          end
        end
      end
    end
    
      config.active_support.test_order = :random
    
      def setup
    tmp_dir = File.join GEM_PATH, 'tmp/node-mincer'
    success = Dir.chdir DUMMY_PATH do
      silence_stdout_if !ENV['VERBOSE'] do
        system 'node', 'manifest.js', tmp_dir
      end
    end
    assert success, 'Node.js Mincer compilation failed'
    manifest = JSON.parse(File.read('#{tmp_dir}/manifest.json'))
    css_name = manifest['assets']['application.css']
    @css = File.read('#{tmp_dir}/#{css_name}')
  end
end
