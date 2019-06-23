module Admin
  class EmailDomainBlocksController < BaseController
    before_action :set_email_domain_block, only: [:show, :destroy]
    
      def maxwidth_or_default
    (params[:maxwidth].presence || 400).to_i
  end
    
      def process_push_request
    case hub_mode
    when 'subscribe'
      Pubsubhubbub::SubscribeService.new.call(account_from_topic, hub_callback, hub_secret, hub_lease_seconds, verified_domain)
    when 'unsubscribe'
      Pubsubhubbub::UnsubscribeService.new.call(account_from_topic, hub_callback)
    else
      ['Unknown mode: #{hub_mode}', 422]
    end
  end
    
      private
    
      included do
    before_action :set_session_activity
  end
    
    (import 'mDNSResponder.sb')
    
    World(RemoteCommandHelpers)

    
      def vagrant_cli_command(command)
    puts '[vagrant] #{command}'
    stdout, stderr, status = Dir.chdir(VAGRANT_ROOT) do
      Open3.capture3('#{VAGRANT_BIN} #{command}')
    end
    
            @response = (gets || '').chomp
      end
    
          def role_properties_for(rolenames)
        roles = rolenames.to_set
        rps = Set.new unless block_given?
        roles_for(rolenames).each do |host|
          host.roles.intersection(roles).each do |role|
            [host.properties.fetch(role)].flatten(1).each do |props|
              if block_given?
                yield host, role, props
              else
                rps << (props || {}).merge(role: role, hostname: host.hostname)
              end
            end
          end
        end
        block_given? ? nil : rps
      end
    
          def initialize(variables)
        super(variables)
        @validators = {}
      end
    
          def trusted?
        @trusted
      end
    
    %i(git_strategy hg_strategy svn_strategy).each do |strategy|
  validate(strategy) do |key, _value|
    warn(
      '[Deprecation Warning] #{key} is deprecated and will be removed in '\
      'Capistrano 3.7.0.\n'\
      'https://github.com/capistrano/capistrano/blob/master/UPGRADING-3.7.md'
    )
  end
end
    
      def self.link(title)
    title.downcase.gsub(/(?!-)\W /, '-').gsub(' ', '-').gsub(/(?!-)\W/, '')
  end
    
      // writing
  $('form').on('submit',function(e) {
    $.post('/', {msg: '<%= user %>: ' + $('#msg').val()});
    $('#msg').val(''); $('#msg').focus();
    e.preventDefault();
  });
</script>
    
    require 'rack/show_exceptions'
    
          # Essentially the inverse of +mask_token+.
      def unmask_token(masked_token)
        # Split the token into the one-time pad and the encrypted
        # value and decrypt it
        token_length = masked_token.length / 2
        one_time_pad = masked_token[0...token_length]
        encrypted_token = masked_token[token_length..-1]
        xor_byte_strings(one_time_pad, encrypted_token)
      end
    
          def self.default_options(options)
        define_method(:default_options) { super().merge(options) }
      end
    
        it 'Returns nil when Referer header is invalid' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => 'http://bar.com/bad|uri'}
      expect(subject.referrer(env)).to be_nil
    end
  end
end

    
          # The body of the method definition.
      #
      # @note this can be either a `begin` node, if the method body contains
      #       multiple expressions, or any other node, if it contains a single
      #       expression.
      #
      # @return [Node] the body of the method definition
      def body
        node_parts[0]
      end
    
          def ignored_node?(node)
        # Same object found in array?
        ignored_nodes.any? { |n| n.equal?(node) }
      end
    
            css_classes << 'selected' if selected
    
      desc 'Release all gems to rubygems'
  task release: :build do
    sh 'git tag -a -m \'Version #{version}\' v#{version}'
    
                if handler.error.present?
              @coupon_message = handler.error
              respond_with(@order, default_template: 'spree/api/v1/orders/could_not_apply_coupon', status: 422)
              return true
            end
          end
          false
        end
    
      # Do not eager load code on boot. This avoids loading your whole application
  # just for the purpose of running a single test. If you are using a tool that
  # preloads Rails for running tests, you may have to set it to true.
  config.eager_load = false