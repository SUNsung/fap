
        
            valid_oauth_providers :evernote
    
      def tumblr_consumer_secret
    ENV['TUMBLR_OAUTH_SECRET']
  end
    
        if params[:sort].present?
      attribute, direction = params[:sort].downcase.split('.')
      unless valid_sorts.include?(attribute)
        attribute, direction = default.to_a.first
      end
    else
      attribute, direction = default.to_a.first
    end
    
      def load_event
    @event = current_user.events.find(params[:id])
  end
end

    
        respond_to do |format|
      if !running? && @job.destroy
        format.html { redirect_to jobs_path, notice: 'Job deleted.' }
        format.json { head :no_content }
      else
        format.html { redirect_to jobs_path, alert: 'Can not delete a running job.' }
        format.json { render json: @job.errors, status: :unprocessable_entity }
      end
    end
  end
    
      def toggle_availability
    @service = current_user.services.find(params[:id])
    @service.toggle_availability!
    
        def log_status(status)
      puts bold status
    end
    
              render 'admins/pods'
        end
        format.mobile { render 'admins/pods' }
        format.json { render json: pods_json }
      end
    end
    
      def user_search
    if params[:admins_controller_user_search]
      search_params = params.require(:admins_controller_user_search)
                            .permit(:username, :email, :guid, :under13)
      @search = UserSearch.new(search_params)
      @users = @search.perform
    end
    
      context 'called with null values' do
    it 'writes rules for other three' do
      ruleset = 'border-top-style: inset; ' +
                'border-right-style: none; ' +
                'border-left-style: double;'
      bad_rule = 'border-bottom-style: null;'
    
    describe 'margin' do
  before(:all) do
    ParserSupport.parse_file('library/margin')
  end
    
      context 'called with four sizes' do
    it 'applies different widths to all sides' do
      rule = 'padding: 7px 8px 9px 10px'
    
          expect('.all-text-inputs').to have_ruleset(ruleset)
    end
  end