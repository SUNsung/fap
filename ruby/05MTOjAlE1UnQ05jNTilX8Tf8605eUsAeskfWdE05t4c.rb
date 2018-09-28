
        
          def collection_presenter
    ActivityPub::CollectionPresenter.new(
      id: account_collection_url(@account, params[:id]),
      type: :ordered,
      size: @size,
      items: @statuses
    )
  end
end

    
    class ActivityPub::InboxesController < Api::BaseController
  include SignatureVerification
    
      def page_requested?
    params[:page] == 'true'
  end
    
        def filter_params
      params.permit(
        :local,
        :remote,
        :by_domain,
        :silenced,
        :recent,
        :suspended,
        :username,
        :display_name,
        :email,
        :ip,
        :staff
      )
    end
  end
end

    
        def create
      authorize :custom_emoji, :create?
    
      def status_finder
    StatusFinder.new(params[:url])
  end
    
        # we assume that the first file that requires 'sinatra' is the
    # app_file. all other path related options are calculated based
    # on this path by default.
    set :app_file, caller_files.first || $0
    
          def remove_bad_cookies(request, response)
        return if bad_cookies.empty?
        paths = cookie_paths(request.path)
        bad_cookies.each do |name|
          paths.each { |path| response.set_cookie name, empty_cookie(request.host, path) }
        end
      end
    
        it 'sets a session authenticity token if one does not exist' do
      session = {}
      allow(Rack::Protection::AuthenticityToken).to receive(:random_token).and_return(token)
      allow_any_instance_of(Rack::Protection::AuthenticityToken).to receive(:mask_token).and_return(masked_token)
      Rack::Protection::AuthenticityToken.token(session)
      expect(session[:csrf]).to eq(token)
    end
  end
    
        it 'Returns nil when Referer header is invalid' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => 'http://bar.com/bad|uri'}
      expect(subject.referrer(env)).to be_nil
    end
  end
end

    
          it 'autocorrects closing brace on same line from last element' do
        new_source = autocorrect_source(construct(true, false))
    
    shared_examples_for 'multiline literal brace layout method argument' do
  include MultilineLiteralBraceHelper
    
          # Calls the given block for each `when` node in the `case` statement.
      # If no block is given, an `Enumerator` is returned.
      #
      # @return [self] if a block is given
      # @return [Enumerator] if no block is given
      def each_when
        return when_branches.to_enum(__method__) unless block_given?
    
    module RuboCop
  module AST
    # A node extension for `def` nodes. This will be used in place of a plain
    # node when the builder constructs the AST, making its methods available
    # to all `def` nodes within RuboCop.
    class DefNode < Node
      include ParameterizedNode
      include MethodIdentifierPredicates