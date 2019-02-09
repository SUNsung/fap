
        
            t.wakeup
    t.value.should == 5
  end
end
    
    describe 'main#define_method' do
  before :each do
    @code = 'define_method(:boom) { :bam }'
  end
    
    Liquid::Template.register_tag('blockquote', Jekyll::Blockquote)

    
        def get_web_content(url)
      raw_uri           = URI.parse url
      proxy             = ENV['http_proxy']
      if proxy
        proxy_uri       = URI.parse(proxy)
        https           = Net::HTTP::Proxy(proxy_uri.host, proxy_uri.port).new raw_uri.host, raw_uri.port
      else
        https           = Net::HTTP.new raw_uri.host, raw_uri.port
      end
      https.use_ssl     = true
      https.verify_mode = OpenSSL::SSL::VERIFY_NONE
      request           = Net::HTTP::Get.new raw_uri.request_uri
      data              = https.request request
    end
  end
    
      # Used on the blog index to split posts on the <!--more--> marker
  def excerpt(input)
    if input.index(/<!--\s*more\s*-->/i)
      input.split(/<!--\s*more\s*-->/i)[0]
    else
      input
    end
  end
    
      def migration_name
    'add_attachment_#{attachment_names.join('_')}_to_#{name.underscore.pluralize}'
  end
    
        def raise_if_blank_file
      if path.blank?
        raise Errors::NotIdentifiedByImageMagickError.new('Cannot find the geometry of a file with a blank name')
      end
    end
    
    # Example for adding special attributes
package.attributes[:deb_group] = 'super-useful'
package.attributes[:rpm_group] = 'super-useful'
    
        script_errors = []
    setscript = proc do |scriptname|
      # 'self.send(scriptname) == self.before_install == --before-install
      # Gets the path to the script
      path = self.send(scriptname)
      # Skip scripts not set
      next if path.nil?
    
    # A directory package.
#
# This class supports both input and output. As a note, 'output' will
# only emit the files, not any metadata. This is an effective way
# to extract another package type.
class FPM::Package::Dir < FPM::Package
  private
    
        self.description = info['description']
    # Supposedly you can upload a package for npm with no author/author email
    # so I'm being safer with this. Author can also be a hash or a string
    self.vendor = 'Unknown <unknown@unknown.unknown>'
    if info.include?('author')
      author_info = info['author']
      # If a hash, assemble into a string
      if author_info.respond_to? :fetch
        self.vendor = sprintf('%s <%s>', author_info.fetch('name', 'unknown'),
                              author_info.fetch('email', 'unknown@unknown.unknown'))
      else
        # Probably will need a better check for validity here
        self.vendor = author_info unless author_info == ''
      end
    end
    
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
    
        return @architecture
  end # def architecture
    
        realpath = Pathname.new(input_path).realpath.to_s
    ::Dir.chdir(build_path) do
      safesystem('unzip', realpath)
    end
    
        task(options.name) do |_, task_args|
      block.call(*[options, task_args].first(block.arity)) if block_given?
      abort('Must specify args') unless options.respond_to?(:args)
      @args = options.delete_field(:args)
      run_cli
    end
  end