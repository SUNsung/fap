
        
          it 'raises ZeroDivisionError for Rational(0, 1) passed a negative Integer' do
    [-1, -4, -9999].each do |exponent|
      lambda { Rational(0, 1) ** exponent }.should raise_error(ZeroDivisionError, 'divided by 0')
    end
  end
    
      it 'evaluates else-body when then-body separated by 'then' and expression is false' do
    if false then 123
    else 456
    end.should == 456
    
      def test_keyword_duplicated
    bug10315 = '[ruby-core:65625] [Bug #10315]'
    a = []
    def a.add(x) push(x); x; end
    def a.f(k:) k; end
    a.clear
    r = nil
    assert_warn(/duplicated/) {r = eval('a.f(k: a.add(1), k: a.add(2))')}
    assert_equal(2, r)
    assert_equal([1, 2], a, bug10315)
    a.clear
    r = nil
    assert_warn(/duplicated/) {r = eval('a.f({k: a.add(1), k: a.add(2)})')}
    assert_equal(2, r)
    assert_equal([1, 2], a, bug10315)
  end
    
    load_extension('data')
    
    describe 'CApiAllocTypedSpecs (a class with an alloc func defined)' do
  it 'calls the alloc func' do
    @s = CApiAllocTypedSpecs.new
    @s.typed_wrapped_data.should == 42 # not defined in initialize
  end
end
    
        assert_equal 'some_gem', spec.name
    assert_equal 'this is a summary', spec.summary
  end
    
      DIGESTRES_ = /
    ([a-zA-Z\-]+)
      [ \t]*(?:\r\n[ \t]*)*
      =
      [ \t]*(?:\r\n[ \t]*)*
      (?:
       '((?:[^']+|\\[\x00-\x7F])*)' |
       ([!\#$%&'*+\-.0-9A-Z^_`a-z|~]+)
      )/x
    
          def reload
        mtime = File::mtime(@path)
        if mtime > @mtime
          @passwd.clear
          File.open(@path){|io|
            while line = io.gets
              line.chomp!
              case line
              when %r!\A[^:]+:[a-zA-Z0-9./]{13}\z!
                if @password_hash == :bcrypt
                  raise StandardError, '.htpasswd file contains crypt password, only bcrypt passwords supported'
                end
                user, pass = line.split(':')
              when %r!\A[^:]+:\$2[aby]\$\d{2}\$.{53}\z!
                if @password_hash == :crypt
                  raise StandardError, '.htpasswd file contains bcrypt password, only crypt passwords supported'
                end
                user, pass = line.split(':')
              when /:\$/, /:{SHA}/
                raise NotImplementedError,
                      'MD5, SHA1 .htpasswd file not supported'
              else
                raise StandardError, 'bad .htpasswd file'
              end
              @passwd[user] = pass
            end
          }
          @mtime = mtime
        end
      end
    
    if mflags = ENV['GNUMAKEFLAGS'] and /\A-(\S*)j\d*/ =~ mflags
  mflags = mflags.gsub(/(\A|\s)(-\S*)j\d*/, '\1\2')
  mflags.strip!
  ENV['GNUMAKEFLAGS'] = (mflags unless mflags.empty?)
end
ENV['LC_ALL'] = ENV['LANG'] = 'C'
SVNURL = URI.parse('https://svn.ruby-lang.org/repos/ruby/')
GITURL = URI.parse('https://git.ruby-lang.org/ruby.git')
RUBY_VERSION_PATTERN = /^\#define\s+RUBY_VERSION\s+'([\d.]+)'/
    
      end # class Parser
end # module URI

    
      # Unicode-based encodings (except UTF-8)
  UNICODE_ENCODINGS = [Encoding::UTF_16BE, Encoding::UTF_16LE, Encoding::UTF_32BE, Encoding::UTF_32LE,
                       Encoding::GB18030, Encoding::UCS_2BE, Encoding::UCS_4BE]
    
    Bundler.require(
    *Rails.groups(
        coverage: [:test],
        db: all_environments,
        pcap: all_environments
    )
)
    
        # We want to return immediatly if we do not have a packet which is handled by us
    return unless pkt.is_tcp?
    return if (pkt.tcp_sport != 143 and pkt.tcp_dport != 143)
    s = find_session((pkt.tcp_sport == 143) ? get_session_src(pkt) : get_session_dst(pkt))
    s[:sname] ||= 'imap4'
    
      def parse(pkt)
    # We want to return immediatly if we do not have a packet which is handled by us
    return unless pkt.is_tcp?
    return if (pkt.tcp_sport != 110 and pkt.tcp_dport != 110)
    s = find_session((pkt.tcp_sport == 110) ? get_session_src(pkt) : get_session_dst(pkt))
    
    signer._invoke('JarSignerMSF','[Ljava.lang.String;',jarsignerOpts)
    
          def failure_message_helper(negated = '')
        verb = @expected_title.is_a?(Regexp) ? 'match' : 'include'
        'expected #{@actual_title.inspect}#{negated} to #{verb} #{@expected_title.inspect}'
      end
    
    module Capybara
  class Selector
    module Filters
      class Base
        def initialize(name, matcher, block, **options)
          @name = name
          @matcher = matcher
          @block = block
          @options = options
          @options[:valid_values] = [true, false] if options[:boolean]
        end
    
          def extract_locator(args)
        locator, options = *args, {}
        locator, options = nil, locator if locator.is_a? Hash
        [locator, options]
      end
    end
  end
end

    
        if @user.save
      if email_changed
        redirect_to_with_json verify_path(:return_to => settings_path), :notice => 'Your settings have been updated successfully. As you've changed, your e-mail address you'll need to verify it before you can continue.'
      else
        redirect_to_with_json settings_path, :notice => 'Your settings have been updated successfully.'
      end
    else
      render_form_errors 'edit', @user
    end
  end
    
      def require_organization_owner
    unless organization.owner == current_user
      redirect_to organization_root_path(organization), :alert => 'This page can only be accessed by the organization's owner (#{organization.owner.name})'
    end
  end
    
      before_action { @server = organization.servers.present.find_by_permalink!(params[:server_id]) }
  before_action { params[:id] && @http_endpoint = @server.http_endpoints.find_by_uuid!(params[:id]) }
    
      before_action :admin_required
  before_action { @ip_pool = IPPool.find_by_uuid!(params[:ip_pool_id]) }
  before_action { params[:id] && @ip_address = @ip_pool.ip_addresses.find(params[:id]) }
    
      def create
    @route = @server.routes.build(safe_params)
    if @route.save
      redirect_to_with_json [organization, @server, :routes]
    else
      render_form_errors 'new', @route
    end
  end
    
      def create
    login(User.authenticate(params[:email_address], params[:password]))
    flash[:remember_login] = true
    redirect_to_with_return_to root_path
  rescue Postal::Errors::AuthenticationError => e
    flash.now[:alert] = 'The credentials you've provided are incorrect. Please check and try again.'
    render 'new'
  end
    
      def create
    @webhook = @server.webhooks.build(safe_params)
    if @webhook.save
      redirect_to_with_json [organization, @server, :webhooks]
    else
      render_form_errors 'new', @webhook
    end
  end