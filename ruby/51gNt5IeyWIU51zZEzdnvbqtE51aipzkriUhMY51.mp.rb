
        
        Benchmark.ips do |x|
  x.report('no body include?') { CONTENT_NOT_CONTAINING.include?('<body') }
  x.report('no body regexp')   { CONTENT_NOT_CONTAINING =~ /<\s*body/ }
  x.compare!
end
    
    #
    
    html_readme = '<html>#{Kramdown::Document.new(open('README.md').read).to_html}</html>'
readme_doctree = REXML::Document.new(html_readme)
links = REXML::XPath.match(readme_doctree, '//a')
    
      def start_worker?
    true
  end
    
      def edit
    @user_credential = current_user.user_credentials.find(params[:id])
  end
    
      def test_untainted_path
    bug5374 = '[ruby-core:39745]'
    cwd = ('./'*40+'.'.taint).dup.untaint
    in_safe = proc {|safe| $SAFE = safe; File.stat(cwd)}
    assert_not_send([cwd, :tainted?])
    (0..1).each do |level|
      assert_nothing_raised(SecurityError, bug5374) {in_safe[level]}
    end
  ensure
    $SAFE = 0
  end
    
      def test_hash2
    assert_kind_of(Integer, @cls[].hash)
    h = @cls[1=>2]
    h.shift
    assert_equal({}.hash, h.hash, '[ruby-core:38650]')
    bug9231 = '[ruby-core:58993] [Bug #9231]'
    assert_not_equal(0, @cls[].hash, bug9231)
  end
    
        set = Set.new(1..10)
    enum = set.classify
    
      it 'decodes NaN' do
    # mumble mumble NaN mumble https://bugs.ruby-lang.org/issues/5884
    [nan_value].pack(unpack_format).unpack(unpack_format).first.nan?.should be_true
  end
    
      it 'decodes the remaining ints when passed the '*' modifier' do
    'acbdegfh'.unpack(unpack_format('*')).should == [1684169569, 1751541605]
  end
    
        t.join
  end
    
        t.join
  end
    
      #forward some requests to status message, because a poll is just attached to a status message and is not sharable itself
  delegate :author_id, :diaspora_handle, :public?, :subscribers, to: :status_message
    
      def create_hash(model, opts={})
    opts[:range] ||= 1.day
    plural = model.to_s.underscore.pluralize
    eval(<<DATA
      @#{plural} = {
        :day_before => #{model}.where(:created_at => ((Time.now.midnight - #{opts[:range]*2})..Time.now.midnight - #{opts[:range]})).count,
        :yesterday => #{model}.where(:created_at => ((Time.now.midnight - #{opts[:range]})..Time.now.midnight)).count
      }
      @#{plural}[:change] = percent_change(@#{plural}[:yesterday], @#{plural}[:day_before])
DATA
    )
  end
    
          def handle_prompt_with_signed_in_user
        client_id = params[:client_id]
        if client_id
          auth = Api::OpenidConnect::Authorization.find_by_client_id_user_and_scopes(client_id,
                                                                                     current_user, params[:scope])
          if auth
            process_authorization_consent('true')
          else
            handle_params_error('interaction_required', 'User must already be authorized when `prompt` is `none`')
          end
        else
          handle_params_error('bad_request', 'Client ID is missing from request')
        end
      end
    
            def stock_location_params
          params.require(:stock_location).permit(permitted_stock_location_attributes)
        end
      end
    end
  end
end

    
            def index
          authorize! :read, StockMovement
          @stock_movements = scope.ransack(params[:q]).result.page(params[:page]).per(params[:per_page])
          respond_with(@stock_movements)
        end
    
      context 'called with null values' do
    it 'writes rules for other three' do
      ruleset = 'margin-top: 11px; ' +
                'margin-right: 12px; ' +
                'margin-left: 13px;'
      bad_rule = 'margin-bottom: null;'
    
      context 'called with two sizes' do
    it 'applies to alternating sides' do
      rule = 'padding: 2px 3px'
    
      context 'called with two sizes' do
    it 'applies to height and width' do
      rule = 'height: 2em; width: 1em;'
    
        @inputs_list = %w(
      [type='color']
      [type='date']
      [type='datetime']
      [type='datetime-local']
      [type='email']
      [type='month']
      [type='number']
      [type='password']
      [type='search']
      [type='tel']
      [type='text']
      [type='time']
      [type='url']
      [type='week']
      input:not([type])
      textarea
    )
  end