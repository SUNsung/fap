
        
                      # Rename :minute and :second to :min and :sec
              default[:min] ||= default[:minute]
              default[:sec] ||= default[:second]
    
          delegate_to Type
    
        attr_reader :filters
    
        def effective_path
      @effective_path ||= effective_url.path
    end
  end
end

    
        self.params = {}
    self.headers = { 'User-Agent' => 'DevDocs' }
    self.force_gzip = false
    
            css('> .section', '#preamble', 'a[href*='dict.html']', 'code var', 'code strong').each do |node|
          node.before(node.children).remove
        end
    
        def deconstruct_keys(keys)
      C.keys = keys
      @obj
    end
  end
    
    $testnum=0
$ntest=0
$failed = 0
class Progress
  def initialize
    @color = nil
    @tty = nil
    @quiet = nil
    @verbose = nil
    ARGV.each do |arg|
      case arg
      when /\A--color(?:=(?:always|(auto)|(never)|(.*)))?\z/
        warn 'unknown --color argument: #$3' if $3
        @color = $1 ? nil : !$2
      when /\A--tty(=(?:yes|(no)|(.*)))?\z/
        warn 'unknown --tty argument: #$3' if $3
        @tty = !$1 || !$2
        true
      when /\A-(q|-quiet)\z/
        @quiet = true
      when /\A-(v|-verbose)\z/
        @verbose = true
      end
    end
    @tty = STDERR.tty? && !STDOUT.tty? && /dumb/ !~ ENV['TERM'] if @tty.nil?
    @eol = @tty && !@verbose ? '\r\e[K\r' : '\n'
    case @color
    when nil
      @color = @tty
    end
    if @color
      # dircolors-like style
      colors = (colors = ENV['TEST_COLORS']) ? Hash[colors.scan(/(\w+)=([^:\n]*)/)] : {}
      begin
        File.read(File.join(__dir__, '../test/colors')).scan(/(\w+)=([^:\n]*)/) do |n, c|
          colors[n] ||= c
        end
      rescue
      end
      @passed = '\e[;#{colors['pass'] || '32'}m'
      @failed = '\e[;#{colors['fail'] || '31'}m'
      @reset = '\e[m'
    else
      @passed = @failed = @reset = ''
    end
    extend(Rotator) if @tty
  end
    
    undef printf
alias printf printf_orig

    
          def get_installer_for(plugin_name)
        uri = pack_uri(plugin_name)
    
      def execute
    signal_deprecation_warning_for_pack
    
      it 'does object equality on config_hash and pipeline_id' do
    another_exact_pipeline = described_class.new(source, pipeline_id, ordered_config_parts, settings)
    expect(subject).to eq(another_exact_pipeline)
    
              it 'allow to install a specific version' do
            command = logstash.run_command_in_path('bin/logstash-plugin install --no-verify --version 0.1.0 logstash-filter-qatest')
            expect(command).to install_successfully
            expect(logstash).to have_installed?('logstash-filter-qatest', '0.1.0')
          end
        end
      end
    
    Liquid::Template.register_tag('blockquote', Jekyll::Blockquote)

    
        def poster
      'poster='#{@poster}'' if @poster
    end
    
    Given /^(?:|I )am on (.+)$/ do |page_name|
  visit path_to(page_name)
end
    
      def migration_name
    'add_attachment_#{attachment_names.join('_')}_to_#{name.underscore.pluralize}'
  end
    
        # Returns the underscored, pluralized version of the class name.
    # e.g. 'users' for the User class.
    # NOTE: The arguments need to be optional, because some tools fetch
    # all class names. Calling #class will return the expected class.
    def class attachment = nil, style_name = nil
      return super() if attachment.nil? && style_name.nil?
      plural_cache.underscore_and_pluralize_class(attachment.instance.class)
    end