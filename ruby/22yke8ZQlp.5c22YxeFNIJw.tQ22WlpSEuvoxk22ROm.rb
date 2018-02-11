
        
          # True if a {Formula} is being built universally.
  # e.g. on newer Intel Macs this means a combined x86_64/x86 binary/library.
  # <pre>args << '--universal-binary' if build.universal?</pre>
  def universal?
    include?('universal') && option_defined?('universal')
  end
    
      def xcode
    if instance_variable_defined?(:@xcode)
      @xcode
    elsif MacOS::Xcode.installed?
      @xcode = MacOS::Xcode.version
      @xcode += ' => #{MacOS::Xcode.prefix}' unless MacOS::Xcode.default_prefix?
      @xcode
    end
  end
    
      def self.factory(name)
    Formulary.factory(name)
  end
    
          ::Sass.load_paths << stylesheets_path
    
        def log_file_info(s)
      puts '    #{magenta s}'
    end
    
    require 'rake/testtask'
Rake::TestTask.new do |t|
  t.libs << 'test'
  t.test_files = FileList['test/**/*_test.rb']
  t.verbose = true
end
    
          # Inspired by https://github.com/nov/openid_connect_sample/blob/master/app/controllers/connect/clients_controller.rb#L24
      def create
        registrar = OpenIDConnect::Client::Registrar.new(request.url, params)
        client = Api::OpenidConnect::OAuthApplication.register! registrar
        render json: client.as_json(root: false)
      end
    
    Liquid::Template.register_tag('blockquote', Jekyll::Blockquote)

    
    require 'pathname'
require './plugins/octopress_filters'
    
      class VideoTag < Liquid::Tag
    @video = nil
    @poster = ''
    @height = ''
    @width = ''