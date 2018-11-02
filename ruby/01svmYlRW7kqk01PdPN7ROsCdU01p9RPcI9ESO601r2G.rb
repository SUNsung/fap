
        
          # True if a {Formula} is being built with {Formula.stable} instead of {Formula.devel} or {Formula.head}. This is the default.
  # <pre>args << '--some-beta' if build.devel?</pre>
  def stable?
    !(head? || devel?)
  end
    
          # we readlink because this path probably doesn't exist since caveats
      # occurs before the link step of installation
      # Yosemite security measures mildly tighter rules:
      # https://github.com/Homebrew/homebrew/issues/33815
      if !plist_path.file? || !plist_path.symlink?
        if f.plist_startup
          s << 'To have launchd start #{f.full_name} at startup:'
          s << '  sudo mkdir -p #{destination}' unless destination_path.directory?
          s << '  sudo cp -fv #{f.opt_prefix}/*.plist #{destination}'
          s << '  sudo chown root #{plist_link}'
        else
          s << 'To have launchd start #{f.full_name} at login:'
          s << '  mkdir -p #{destination}' unless destination_path.directory?
          s << '  ln -sfv #{f.opt_prefix}/*.plist #{destination}'
        end
        s << 'Then to load #{f.full_name} now:'
        if f.plist_startup
          s << '  sudo launchctl load #{plist_link}'
        else
          s << '  launchctl load #{plist_link}'
        end
      # For startup plists, we cannot tell whether it's running on launchd,
      # as it requires for `sudo launchctl list` to get real result.
      elsif f.plist_startup
        s << 'To reload #{f.full_name} after an upgrade:'
        s << '  sudo launchctl unload #{plist_link}'
        s << '  sudo cp -fv #{f.opt_prefix}/*.plist #{destination}'
        s << '  sudo chown root #{plist_link}'
        s << '  sudo launchctl load #{plist_link}'
      elsif Kernel.system '/bin/launchctl list #{plist_domain} &>/dev/null'
        s << 'To reload #{f.full_name} after an upgrade:'
        s << '  launchctl unload #{plist_link}'
        s << '  launchctl load #{plist_link}'
      else
        s << 'To load #{f.full_name}:'
        s << '  launchctl load #{plist_link}'
      end
    
      def search
    if ARGV.empty?
      puts_columns Formula.full_names
    elsif ARGV.include? '--macports'
      exec_browser 'https://www.macports.org/ports.php?by=name&substr=#{ARGV.next}'
    elsif ARGV.include? '--fink'
      exec_browser 'http://pdb.finkproject.org/pdb/browse.php?summary=#{ARGV.next}'
    elsif ARGV.include? '--debian'
      exec_browser 'https://packages.debian.org/search?keywords=#{ARGV.next}&searchon=names&suite=all&section=all'
    elsif ARGV.include? '--opensuse'
      exec_browser 'https://software.opensuse.org/search?q=#{ARGV.next}'
    elsif ARGV.include? '--fedora'
      exec_browser 'https://admin.fedoraproject.org/pkgdb/packages/%2A#{ARGV.next}%2A/'
    elsif ARGV.include? '--ubuntu'
      exec_browser 'http://packages.ubuntu.com/search?keywords=#{ARGV.next}&searchon=names&suite=all&section=all'
    elsif ARGV.include? '--desc'
      query = ARGV.next
      rx = query_regexp(query)
      Descriptions.search(rx, :desc).print
    elsif ARGV.first =~ HOMEBREW_TAP_FORMULA_REGEX
      query = ARGV.first
      user, repo, name = query.split('/', 3)
    
      private
    
    group :test do
  gem 'omniauth-facebook'
  gem 'omniauth-openid'
  gem 'webrat', '0.7.3', require: false
  gem 'mocha', '~> 1.1', require: false
end
    
      protected
    def after_resetting_password_path_for(resource)
      Devise.sign_in_after_reset_password ? after_sign_in_path_for(resource) : new_session_path(resource_name)
    end
    
        # The path used after sending unlock password instructions
    def after_sending_unlock_instructions_path_for(resource)
      new_session_path(resource) if is_navigational_format?
    end
    
        def password_change(record, opts={})
      devise_mail(record, :password_change, opts)
    end
  end
end

    
        proxy = Devise::Hooks::Proxy.new(warden)
    
    describe 'Kernel#srand' do
  it 'needs to be reviewed for spec completeness'
end

    
      before :each do
    ENV['TEST_SH_EXPANSION'] = 'foo'
    @shell_var = '$TEST_SH_EXPANSION'
    platform_is :windows do
      @shell_var = '%TEST_SH_EXPANSION%'
    end
  end
    
      it 'sets the tainted bit' do
    o = Object.new
    o.taint
    o.tainted?.should == true
  end
    
      it 'requires multiple arguments' do
    Kernel.method(:warn).arity.should < 0
  end
    
    describe 'main#define_method' do
  before :each do
    @code = 'define_method(:boom) { :bam }'
  end
    
            # Decodes a Kerberos response
        #
        # @param data [String] the raw response message
        # @return [<Rex::Proto::Kerberos::Model::KrbError, Rex::Proto::Kerberos::Model::KdcResponse>] the kerberos message response
        # @raise [RuntimeError] if the response can't be processed
        def decode_kerb_response(data)
          asn1 = OpenSSL::ASN1.decode(data)
          msg_type = asn1.value[0].value[1].value[0].value
    
              # Decodes the last_req from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Array<Rex::Proto::Kerberos::Model::LastRequest>]
          def decode_last_req(input)
            last_requests = []
            input.value[0].value.each do |last_request|
              last_requests << Rex::Proto::Kerberos::Model::LastRequest.decode(last_request)
            end
    
              # Decodes the susec field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Integer]
          def decode_susec(input)
            input.value[0].value.to_i
          end
    
    require 'sass/engine'
require 'sass/plugin' if defined?(Merb::Plugins)
require 'sass/railtie'
require 'sass/features'

    
          # @see Base#\_retrieve
      def _retrieve(key, version, sha)
        return unless File.readable?(path_to(key))
        begin
          File.open(path_to(key), 'rb') do |f|
            if f.readline('\n').strip == version && f.readline('\n').strip == sha
              return f.read
            end
          end
          File.unlink path_to(key)
        rescue Errno::ENOENT
          # Already deleted. Race condition?
        end
        nil
      rescue EOFError, TypeError, ArgumentError => e
        Sass::Util.sass_warn 'Warning. Error encountered while reading cache #{path_to(key)}: #{e}'
      end
    
        # Parses the CSS template and applies various transformations
    #
    # @return [Tree::Node] The root node of the parsed tree
    def build_tree
      root = Sass::SCSS::CssParser.new(@template, @options[:filename], nil).parse
      parse_selectors(root)
      expand_commas(root)
      nest_seqs(root)
      parent_ref_rules(root)
      flatten_rules(root)
      bubble_subject(root)
      fold_commas(root)
      dump_selectors(root)
      root
    end
    
        # Prints a status message about performing the given action,
    # colored using the given color (via terminal escapes) if possible.
    #
    # @param name [#to_s] A short name for the action being performed.
    #   Shouldn't be longer than 11 characters.
    # @param color [Symbol] The name of the color to use for this action.
    #   Can be `:red`, `:green`, or `:yellow`.
    def puts_action(name, color, arg)
      return if @options[:for_engine][:quiet]
      printf color(color, '%11s %s\n'), name, arg
      STDOUT.flush
    end
    
        def read(file)
      if file.respond_to?(:read)
        file.read
      else
        open(file, 'rb') {|f| f.read}
      end
    end
  end
end
