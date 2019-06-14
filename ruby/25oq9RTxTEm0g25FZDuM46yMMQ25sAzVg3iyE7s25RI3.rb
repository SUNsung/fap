      def test_missing_helper_error_has_the_right_path
        e = assert_raise(AbstractController::Helpers::MissingHelperError) { AbstractInvalidHelpers.helper(:missing) }
        assert_equal 'helpers/missing_helper.rb', e.path
      end
    end
  end
end

    
          if @report_note.save
        if params[:create_and_resolve]
          @report.resolve!(current_account)
          log_action :resolve, @report
    
      def show
    @status = status_finder.status
    render json: @status, serializer: OEmbedSerializer, width: maxwidth_or_default, height: maxheight_or_default
  end
    
      def rate_limit_limit
    api_throttle_data[:limit].to_s
  end
    
      UPDATE_SIGN_IN_HOURS = 24
    
      UPDATE_SIGN_IN_HOURS = 24
    
      def set_body_classes
    @body_classes = 'modal-layout'
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
    
    module RuboCop
  module Cop
    module Lint
      #
      # This cop emulates the following Ruby warnings in Ruby 2.6.
      #
      # % cat example.rb
      # ERB.new('hi', nil, '-', '@output_buffer')
      # % ruby -rerb example.rb
      # example.rb:1: warning: Passing safe_level with the 2nd argument of
      # ERB.new is deprecated. Do not use it, and specify other arguments as
      # keyword arguments.
      # example.rb:1: warning: Passing trim_mode with the 3rd argument of
      # ERB.new is deprecated. Use keyword argument like
      # ERB.new(str, trim_mode:...) instead.
      # example.rb:1: warning: Passing eoutvar with the 4th argument of ERB.new
      # is deprecated. Use keyword argument like ERB.new(str, eoutvar: ...)
      # instead.
      #
      # Now non-keyword arguments other than first one are softly deprecated
      # and will be removed when Ruby 2.5 becomes EOL.
      # `ERB.new` with non-keyword arguments is deprecated since ERB 2.2.0.
      # Use `:trim_mode` and `:eoutvar` keyword arguments to `ERB.new`.
      # This cop identifies places where `ERB.new(str, trim_mode, eoutvar)` can
      # be replaced by `ERB.new(str, :trim_mode: trim_mode, eoutvar: eoutvar)`.
      #
      # @example
      #   # Target codes supports Ruby 2.6 and higher only
      #   # bad
      #   ERB.new(str, nil, '-', '@output_buffer')
      #
      #   # good
      #   ERB.new(str, trim_mode: '-', eoutvar: '@output_buffer')
      #
      #   # Target codes supports Ruby 2.5 and lower only
      #   # good
      #   ERB.new(str, nil, '-', '@output_buffer')
      #
      #   # Target codes supports Ruby 2.6, 2.5 and lower
      #   # bad
      #   ERB.new(str, nil, '-', '@output_buffer')
      #
      #   # good
      #   # Ruby standard library style
      #   # https://github.com/ruby/ruby/commit/3406c5d
      #   if ERB.instance_method(:initialize).parameters.assoc(:key) # Ruby 2.6+
      #     ERB.new(str, trim_mode: '-', eoutvar: '@output_buffer')
      #   else
      #     ERB.new(str, nil, '-', '@output_buffer')
      #   end
      #
      #   # good
      #   # Use `RUBY_VERSION` style
      #   if RUBY_VERSION >= '2.6'
      #     ERB.new(str, trim_mode: '-', eoutvar: '@output_buffer')
      #   else
      #     ERB.new(str, nil, '-', '@output_buffer')
      #   end
      #
      class ErbNewArguments < Cop
        extend TargetRubyVersion
    
        config.cache_store = :null_store
  end
    
      expansion(:status) {
    {
      :status => o.status,
      :last_delivery_attempt => o.last_delivery_attempt ? o.last_delivery_attempt.to_f : nil,
      :held => o.held == 1 ? true : false,
      :hold_expiry => o.hold_expiry ? o.hold_expiry.to_f : nil
    }
  }
    
    end

    
      def index
    @credentials = @server.credentials.order(:name).to_a
  end
    
      def verify
    if @domain.verified?
      redirect_to [organization, @server, :domains], :alert => '#{@domain.name} has already been verified.'
      return
    end
    
      def new
    @ip_pool_rule = @server ? @server.ip_pool_rules.build : organization.ip_pool_rules.build
  end
    
      before_action :admin_required
  before_action { params[:id] && @ip_pool = IPPool.find_by_uuid!(params[:id]) }
    
      private
    
      def index
    @track_domains = @server.track_domains.order(:name).to_a
  end
    
      def make_owner
    if @user.is_a?(User)
      organization.make_owner(@user)
      redirect_to_with_json [organization, :users], :notice => '#{@user.name} is now the owner of this organization.'
    else
      raise Postal::Error, 'User must be a User not a UserInvite to make owner'
    end
  end
    
      def destroy
    @webhook.destroy
    redirect_to_with_json [organization, @server, :webhooks]
  end
    
      it 'should accept the prompt with a response when there is a default' do
    @session.accept_prompt with: 'the response' do
      @session.click_link('Open defaulted prompt')
    end
    expect(@session).to have_xpath('//a[@id='open-prompt-with-default' and @response='the response']')
  end
    
      it 'should find the ancestor element using the given locator' do
    el = @session.find(:css, '#first_image')
    expect(el.ancestor('//p')).to have_text('Lorem ipsum dolor')
    expect(el.ancestor('//a')[:'aria-label']).to eq('Go to simple')
  end
    
      it 'casts to string' do
    expect(@session.find_link(:foo).text).to eq('ullamco')
  end
    
      it 'should be false for disabled buttons if disabled: false' do
    expect(@session).to have_no_button('Disabled button', disabled: false)
  end
end
