
        
                make_test_case_available_to_view!
        say_no_to_protect_against_forgery!
      end
    
            def test_url_missing_scheme
          spec = resolve 'foo'
          assert_equal({
            'database' => 'foo' }, spec)
        end
    
      def call_controller(klass, action)
    klass.action(action).call(ActionController::TestRequest::DEFAULT_ENV.dup)
  end
    
      test 'authentication request with badly formatted header' do
    @request.env['HTTP_AUTHORIZATION'] = 'Token token$'lifo''
    get :index
    
        include Behavior
  end
end

    
    require 'abstract_unit'
require 'mailers/base_mailer'
require 'active_support/log_subscriber/test_helper'
require 'action_mailer/log_subscriber'
    
          https://pip.readthedocs.org/en/stable/installing/#install-pip
    EOS
  when 'pil' then <<-EOS.undent
    Instead of PIL, consider `pip install pillow` or `brew install Homebrew/python/pillow`.
    EOS
  when 'macruby' then <<-EOS.undent
    MacRuby works better when you install their package:
      http://www.macruby.org/
    EOS
  when /(lib)?lzma/
    'lzma is now part of the xz formula.'
  when 'xcode'
    if MacOS.version >= :lion
      <<-EOS.undent
      Xcode can be installed from the App Store.
      EOS
    else
      <<-EOS.undent
      Xcode can be installed from https://developer.apple.com/xcode/downloads/
      EOS
    end
  when 'gtest', 'googletest', 'google-test' then <<-EOS.undent
    Installing gtest system-wide is not recommended; it should be vendored
    in your projects that use it.
    EOS
  when 'gmock', 'googlemock', 'google-mock' then <<-EOS.undent
    Installing gmock system-wide is not recommended; it should be vendored
    in your projects that use it.
    EOS
  when 'sshpass' then <<-EOS.undent
    We won't add sshpass because it makes it too easy for novice SSH users to
    ruin SSH's security.
    EOS
  when 'gsutil' then <<-EOS.undent
    Install gsutil with `pip install gsutil`
    EOS
  when 'clojure' then <<-EOS.undent
    Clojure isn't really a program but a library managed as part of a
    project and Leiningen is the user interface to that library.
    
      def app_caveats
    if keg && keg.app_installed?
      <<-EOS.undent
        .app bundles were installed.
        Run `brew linkapps #{keg.name}` to symlink these to /Applications.
      EOS
    end
  end
    
        def self.prune?(path, options = {})
      @time ||= Time.now
    
      def describe_ruby
    ruby = which 'ruby'
    return 'N/A' if ruby.nil?
    ruby_binary = Utils.popen_read ruby, '-rrbconfig', '-e', \
      'include RbConfig;print'#{CONFIG['bindir']}/#{CONFIG['ruby_install_name']}#{CONFIG['EXEEXT']}''
    ruby_binary = Pathname.new(ruby_binary).realpath
    if ruby == ruby_binary
      ruby
    else
      '#{ruby} => #{ruby_binary}'
    end
  end
    
        def register_sprockets
      Sprockets.append_path(stylesheets_path)
      Sprockets.append_path(fonts_path)
      Sprockets.append_path(javascripts_path)
    end
  end
end
    
      def test_font_helper_without_suffix
    assert_match %r(url\(['']?/assets/.*eot['']?\)), @css
  end
    
      desc 'update main and version in bower.json'
  task :generate do
    require 'bootstrap-sass'
    Dir.chdir Bootstrap.gem_path do
      spec       = JSON.parse(File.read 'bower.json')
    
    module Capistrano
  module Doctor
    # Prints table of all Capistrano-related gems and their version numbers. If
    # there is a newer version of a gem available, call attention to it.
    class GemsDoctor
      include Capistrano::Doctor::OutputHelpers
    
            rows.each do |row|
          line = row.values.each_with_index.map do |value, col|
            value.to_s.ljust(col_widths[col])
          end.join(' ').rstrip
          line = color.colorize(line, row.color) if row.color
          puts line
        end
      end
    
    # IMPORTANT: The Capistrano::Plugin system is not yet considered a stable,
# public API, and is subject to change without notice. Eventually it will be
# officially documented and supported, but for now, use it at your own risk.
#
# Base class for Capistrano plugins. Makes building a Capistrano plugin as easy
# as writing a `Capistrano::Plugin` subclass and overriding any or all of its
# three template methods:
#
# * set_defaults
# * register_hooks
# * define_tasks
#
# Within the plugin you can use any methods of the Rake or Capistrano DSLs, like
# `fetch`, `invoke`, etc. In cases when you need to use SSHKit's backend outside
# of an `on` block, use the `backend` convenience method. E.g. `backend.test`,
# `backend.execute`, or `backend.capture`.
#
# Package up and distribute your plugin class as a gem and you're good to go!
#
# To use a plugin, all a user has to do is install it in the Capfile, like this:
#
#   # Capfile
#   require 'capistrano/superfancy'
#   install_plugin Capistrano::Superfancy
#
# Or, to install the plugin without its hooks:
#
#   # Capfile
#   require 'capistrano/superfancy'
#   install_plugin Capistrano::Superfancy, load_hooks: false
#
class Capistrano::Plugin < Rake::TaskLib
  include Capistrano::DSL
    
        # @abstract
    #
    # Update the clone on the deployment target
    #
    # @return void
    #
    def update
      raise NotImplementedError, 'Your SCM strategy module should provide a #update method'
    end
    
      describe 'role_properties()' do
    before do
      dsl.role :redis, %w[example1.com example2.com], redis: { port: 6379, type: :slave }
      dsl.server 'example1.com', roles: %w{web}, active: true, web: { port: 80 }
      dsl.server 'example2.com', roles: %w{web redis}, web: { port: 81 }, redis: { type: :master }
      dsl.server 'example3.com', roles: %w{app}, primary: true
    end
    
        if as == :json
      if api_error?(data)
        data = generate_error_hash(data)
      else
        selected_fields = extract_fields(filter.to_s.strip)
        data.select! { |k,v| selected_fields.include?(k) } unless selected_fields.empty?
        unless options.include?(:exclude_default_metadata)
          data = data.to_hash
          if data.values.size == 0 && selected_fields.size > 0
            raise LogStash::Api::NotFoundError
          end
          data = default_metadata.merge(data)
        end
      end
    
      def self.plugin_type
    'codec'
  end
    
        s0, i0 = [], index
    loop do
      r1 = _nt_selector_element
      if r1
        s0 << r1
      else
        break
      end
    end
    if s0.empty?
      @index = i0
      r0 = nil
    else
      r0 = instantiate_node(LogStash::Config::AST::Selector,input, i0...index, s0)
    end