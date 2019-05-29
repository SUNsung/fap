
        
              private
    
          if period_type == :all
        DB.exec <<~SQL
          UPDATE user_stats s
          SET likes_given         = d.likes_given,
              likes_received      = d.likes_received,
              topic_count         = d.topic_count,
              post_count          = d.post_count
    
        def build
      policy = ActionDispatch::ContentSecurityPolicy.new
    
        def initialize
      @directives = {}.tap do |directives|
        directives[:base_uri] = [:none]
        directives[:object_src] = [:none]
        directives[:script_src] = script_src
        directives[:worker_src] = worker_src
        directives[:report_uri] = report_uri if SiteSetting.content_security_policy_collect_reports
      end
    end
    
              # either staff member or OP
          unless post.user_id == user&.id || user&.staff?
            raise StandardError.new I18n.t('poll.only_staff_or_op_can_toggle_status') if raise_errors
            return
          end
    
        if resource.errors.empty?
      set_flash_message!(:notice, :confirmed)
      respond_with_navigational(resource){ redirect_to after_confirmation_path_for(resource_name, resource) }
    else
      respond_with_navigational(resource.errors, status: :unprocessable_entity){ render :new }
    end
  end
    
        if resource.errors.empty?
      set_flash_message! :notice, :unlocked
      respond_with_navigational(resource){ redirect_to after_unlock_path_for(resource) }
    else
      respond_with_navigational(resource.errors, status: :unprocessable_entity){ render :new }
    end
  end
    
      private
    
    # Each time a record is set we check whether its session has already timed out
# or not, based on last request time. If so, the record is logged out and
# redirected to the sign in page. Also, each time the request comes and the
# record is set, we set the last request time inside its scoped session to
# verify timeout in the following request.
Warden::Manager.after_set_user do |record, warden, options|
  scope = options[:scope]
  env   = warden.request.env
    
          def template_paths
        template_path = _prefixes.dup
        template_path.unshift '#{@devise_mapping.scoped_path}/mailer' if self.class.scoped_views?
        template_path
      end
    
          def self.required_fields(klass)
        [:reset_password_sent_at, :reset_password_token]
      end
    
    module Devise
  module Models
    # Timeoutable takes care of verifying whether a user session has already
    # expired or not. When a session expires after the configured time, the user
    # will be asked for credentials again, it means, they will be redirected
    # to the sign in page.
    #
    # == Options
    #
    # Timeoutable adds the following options to devise_for:
    #
    #   * +timeout_in+: the interval to timeout the user session without activity.
    #
    # == Examples
    #
    #   user.timedout?(30.minutes.ago)
    #
    module Timeoutable
      extend ActiveSupport::Concern
    
    def_name_to_int('rsock_family_to_int', /\A(AF_|PF_)/, 'AF_')
def_name_to_int('rsock_socktype_to_int', /\ASOCK_/, 'SOCK_')
def_name_to_int('rsock_ipproto_to_int', /\AIPPROTO_/, 'IPPROTO_')
def_name_to_int('rsock_unknown_level_to_int', /\ASOL_SOCKET\z/, 'SOL_')
def_name_to_int('rsock_ip_level_to_int', /\A(SOL_SOCKET\z|IPPROTO_)/, /\A(SOL_|IPPROTO_)/)
def_name_to_int('rsock_so_optname_to_int', /\ASO_/, 'SO_')
def_name_to_int('rsock_ip_optname_to_int', /\AIP_/, 'IP_')
def_name_to_int('rsock_ipv6_optname_to_int', /\AIPV6_/, 'IPV6_', 'IPPROTO_IPV6')
def_name_to_int('rsock_tcp_optname_to_int', /\ATCP_/, 'TCP_')
def_name_to_int('rsock_udp_optname_to_int', /\AUDP_/, 'UDP_')
def_name_to_int('rsock_shutdown_how_to_int', /\ASHUT_/, 'SHUT_')
def_name_to_int('rsock_scm_optname_to_int', /\ASCM_/, 'SCM_')
    
        v = (-inf..0).bsearch {|x| x != -inf }
    assert_operator(-Float::MAX, :>=, v)
    assert_operator(-inf, :<, v)
    
    srcdir ||= File.dirname(File.dirname(Program))
begin
  vcs = VCS.detect(srcdir)
rescue VCS::NotFoundError => e
  abort '#{File.basename(Program)}: #{e.message}' unless @suppress_not_found
else
  ok = true
  (ARGV.empty? ? [nil] : ARGV).each do |arg|
    begin
      puts @output[*vcs.get_revisions(arg)]
    rescue => e
      next if @suppress_not_found and VCS::NotFoundError === e
      warn '#{File.basename(Program)}: #{e.message}'
      ok = false
    end
  end
  exit ok
end

    
      # Specifies the header that your server uses for sending files.
  # config.action_dispatch.x_sendfile_header = 'X-Sendfile' # for apache
  # config.action_dispatch.x_sendfile_header = 'X-Accel-Redirect' # for nginx
    
      def test_font_helper_with_suffix_question
    assert_match %r(url\(['']?/assets/.*eot\?.*['']?\)), @css
  end
    
    # test/spec/mini 3
# http://gist.github.com/25455
# chris@ozmm.org
# file:lib/test/spec/mini.rb
def context(*args, &block)
  return super unless (name = args.first) && block
  require 'test/unit'
  klass = Class.new(defined?(ActiveSupport::TestCase) ? ActiveSupport::TestCase : Test::Unit::TestCase) do
    def self.test(name, &block)
      define_method('test_#{name.gsub(/\W/, '_')}', &block) if block
    end
    
    desc 'Validate lib files and version file'
task :validate do
  libfiles = Dir['lib/*'] - ['lib/#{name}.rb', 'lib/#{name}']
  unless libfiles.empty?
    puts 'Directory `lib` should only contain a `#{name}.rb` file and `#{name}` dir.'
    exit!
  end
  unless Dir['VERSION*'].empty?
    puts 'A `VERSION` file at root level violates Gem best practices.'
    exit!
  end
end

    
    # internal
require File.expand_path('../gollum/uri_encode_component', __FILE__)