
        
            should 'hide unpublished page' do
      refute_exist dest_dir('/unpublished.html')
    end
    
    WITH_JUST_LIQUID_VAR = <<-LIQUID.freeze
Lorem ipsum dolor sit amet, consectetur adipiscing elit. Fusce auctor libero at
pharetra tempus. et metus fermentum, eu cursus lorem, ac dictum enim.
mattis. Curabitur vel dui et lacus rutrum suscipit et {{ title }} neque.
    
    Benchmark.ips do |x|
  x.report('no body include?') { CONTENT_NOT_CONTAINING.include?('<body') }
  x.report('no body regexp')   { CONTENT_NOT_CONTAINING =~ /<\s*body/ }
  x.compare!
end
    
      def translation_scope
    'devise.sessions'
  end
    
    class Devise::UnlocksController < DeviseController
  prepend_before_action :require_no_authentication
    
      # Helper for use in before_actions where no authentication is required.
  #
  # Example:
  #   before_action :require_no_authentication, only: :new
  def require_no_authentication
    assert_is_devise_resource!
    return unless is_navigational_format?
    no_input = devise_mapping.no_input_strategies
    
          attr_reader :scope_name, :resource
    
            it 'not calls erros.add' do
          expect(errors).not_to have_received(:add).with(:username, any_args)
        end
      end
    end
  end
end

    
      sidekiq_options unique: :until_executed, retry: 0
    
      # Series of attempts to detect a default value method for collection.
  # config.collection_value_methods = [ :id, :to_s ]
    
        return unless datastore['STORE_LOOT']
    
    unless $LOAD_PATH.include? lib_path
  $LOAD_PATH.unshift lib_path
end

    
      def data_service_exist?(data_service)
    @data_services.each_value{|value|
      if (value.name == data_service.name)
        return true
      end
    }
    
      #
  # Use a locally stored Kerberos ticket in the current session.
  #
  def cmd_kerberos_ticket_use(*args)
    if args.length != 1
      print_line('Usage: kerberos_ticket_use ticketpath')
      return
    end
    
        register_options(
      [
        OptPath.new('SOURCE_FILE', [true, 'Path to source code']),
        OptBool.new('RUN_BINARY', [false, 'Execute the generated binary', false]),
        OptString.new('ASSEMBLIES', [false, 'Any assemblies outside the defaults', 'mscorlib.dll, System.dll, System.Xml.dll, System.Data.dll' ]),
        OptString.new('OUTPUT_TARGET', [false, 'Name and path of the generated binary, default random, omit extension' ]),
        OptString.new('COMPILER_OPTS', [false, 'Options to pass to compiler', '/optimize']),
        OptString.new('CODE_PROVIDER', [true, 'Code provider to use', 'Microsoft.CSharp.CSharpCodeProvider'])
      ], self.class
    )
    register_advanced_options(
      [
        OptString.new('NET_CLR_VER', [false, 'Minimum NET CLR version required to compile', '4.0'])
      ], self.class
    )
  end
    
    # grab name/url pairings from README.md
readme = File.open('README.md', 'r')
contents = readme.read
matches = contents.scan(/\* (.*) (http.*)/)
    
        def log_file_info(s)
      puts '    #{magenta s}'
    end
    
      # Enable Rack::Cache to put a simple HTTP cache in front of your application
  # Add `rack-cache` to your Gemfile before enabling this.
  # For large-scale production use, consider using a caching reverse proxy like nginx, varnish or squid.
  # config.action_dispatch.rack_cache = true
    
          raise(UnknownPlugin) unless klass
      klass
    end
    
            if Utils::HttpClient.remote_file_exist?(uri)
          PluginManager.ui.debug('Found package at: #{uri}')
          return LogStash::PluginManager::PackInstaller::Remote.new(uri)
        else
          PluginManager.ui.debug('Package not found at: #{uri}')
          return nil
        end
      rescue SocketError, Errno::ECONNREFUSED, Errno::EHOSTUNREACH => e
        # This probably means there is a firewall in place of the proxy is not correctly configured.
        # So lets skip this strategy but log a meaningful errors.
        PluginManager.ui.debug('Network error, skipping Elastic pack, exception: #{e}')
    
            context 'when fetching a gem from rubygems' do
    
    class SinatraStaticServer < Sinatra::Base
    
        def render(context)
      quote = paragraphize(super)
      author = '<strong>#{@by.strip}</strong>' if @by
      if @source
        url = @source.match(/https?:\/\/(.+)/)[1].split('/')
        parts = []
        url.each do |part|
          if (parts + [part]).join('/').length < 32
            parts << part
          end
        end
        source = parts.join('/')
        source << '/&hellip;' unless source == @source
      end
      if !@source.nil?
        cite = ' <cite><a href='#{@source}'>#{(@title || source)}</a></cite>'
      elsif !@title.nil?
        cite = ' <cite>#{@title}</cite>'
      end
      blockquote = if @by.nil?
        quote
      elsif cite
        '#{quote}<footer>#{author + cite}</footer>'
      else
        '#{quote}<footer>#{author}</footer>'
      end
      '<blockquote>#{blockquote}</blockquote>'
    end
    
    
===============================================
 Error for category_generator.rb plugin
-----------------------------------------------
 No 'category_index.html' in source/_layouts/
 Perhaps you haven't installed a theme yet.
===============================================
    
        def render(context)
      if @img
        '<img #{@img.collect {|k,v| '#{k}=\'#{v}\'' if v}.join(' ')}>'
      else
        'Error processing input, expected syntax: {% img [class name(s)] [http[s]:/]/path/to/image [width [height]] [title text | \'title text\' [\'alt text\']] %}'
      end
    end
  end
end
    
    end
    
        def render(context)
      code_dir = (context.registers[:site].config['code_dir'].sub(/^\//,'') || 'downloads/code')
      code_path = (Pathname.new(context.registers[:site].source) + code_dir).expand_path
      file = code_path + @file
    
      class RenderPartialTag < Liquid::Tag
    include OctopressFilters
    def initialize(tag_name, markup, tokens)
      @file = nil
      @raw = false
      if markup =~ /^(\S+)\s?(\w+)?/
        @file = $1.strip
        @raw = $2 == 'raw'
      end
      super
    end
    
        def initialize(tag_name, markup, tokens)
      @videos = markup.scan(/((https?:\/\/|\/)\S+\.(webm|ogv|mp4)\S*)/i).map(&:first).compact
      @poster = markup.scan(/((https?:\/\/|\/)\S+\.(png|gif|jpe?g)\S*)/i).map(&:first).compact.first
      @sizes  = markup.scan(/\s(\d\S+)/i).map(&:first).compact
      super
    end
    
          subject.attributes[:python_scripts_executable] = 'fancypants'
      # Newer versions of Django require Python 3.
      subject.attributes[:python_bin] = 'python3'
      subject.input('django')
    
        context 'when :template_scripts? is true' do
      before do
        subject.attributes[:template_scripts?] = true
      end
    
    Vagrant.configure('2') do |config|
  # All Vagrant configuration is done here. The most common configuration
  # options are documented and commented below. For a complete reference,
  # please see the online documentation at vagrantup.com.
    
      option ['-t', '--output-type'], 'OUTPUT_TYPE',
    'the type of package you want to create (deb, rpm, solaris, etc)',
    :attribute_name => :output_type
  option ['-s', '--input-type'], 'INPUT_TYPE',
    'the package type to use as input (gem, rpm, python, etc)',
    :attribute_name => :input_type
  option ['-C', '--chdir'], 'CHDIR',
    'Change directory to here before searching for files',
    :attribute_name => :chdir
  option '--prefix', 'PREFIX',
    'A path to prefix files with when building the target package. This may ' \
    'not be necessary for all input packages. For example, the 'gem' type ' \
    'will prefix with your gem directory automatically.'
  option ['-p', '--package'], 'OUTPUT', 'The package file path to output.'
  option ['-f', '--force'], :flag, 'Force output even if it will overwrite an ' \
    'existing file', :default => false
  option ['-n', '--name'], 'NAME', 'The name to give to the package'
    
      private
  # return the identifier by prepending the reverse-domain prefix
  # to the package name, else return just the name
  def identifier
    identifier = name.dup
    if self.attributes[:osxpkg_identifier_prefix]
      identifier.insert(0, '#{self.attributes[:osxpkg_identifier_prefix]}.')
    end
    identifier
  end # def identifier
    
      option '--group', 'GROUP',
    'Set the group to GROUP in the prototype file.',
    :default => 'root'
    
      def compression_ending
    case self.attributes[:pacman_compression]
      when nil, 'xz'
        return '.xz'
      when 'none'
        return ''
      when 'gz'
        return '.gz'
      when 'bzip2'
        return '.bz2'
      else
        return '.xz'
      end
  end
    
      def default_output
    v = version
    v = '#{epoch}:#{v}' if epoch
    if iteration
      '#{name}_#{v}-#{iteration}_#{architecture}.#{type}'
    else
      '#{name}_#{v}_#{architecture}.#{type}'
    end
  end # def default_output
end # class FPM::Deb