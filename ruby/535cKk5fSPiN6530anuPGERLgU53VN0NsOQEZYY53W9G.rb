
        
              def remember_key(resource, scope)
        resource.rememberable_options.fetch(:key, 'remember_#{scope}_token')
      end
    end
  end
end

    
        # Try retrieving the URL options from the parent controller (usually
    # ApplicationController). Instance methods are not supported at the moment,
    # so only the class-level attribute is used.
    def self.default_url_options(*args)
      if defined?(Devise.parent_controller.constantize)
        Devise.parent_controller.constantize.try(:default_url_options) || {}
      else
        {}
      end
    end
    
      validate :enough_poll_answers
  validates :question, presence: true
    
          users = User.arel_table
      people = Person.arel_table
      profiles = Profile.arel_table
      res = User.joins(person: :profile)
      res = res.where(users[:username].matches('%#{username}%')) unless username.blank?
      res = res.where(users[:email].matches('%#{email}%')) unless email.blank?
      res = res.where(people[:guid].matches('%#{guid}%')) unless guid.blank?
      res = res.where(profiles[:birthday].gt(Date.today-13.years)) if under13 == '1'
      res
    end
  end
end

    
          def handle_params_error_when_client_id_and_redirect_uri_exists(error, error_description)
        app = Api::OpenidConnect::OAuthApplication.find_by(client_id: params[:client_id])
        if app && app.redirect_uris.include?(params[:redirect_uri])
          redirect_prompt_error_display(error, error_description)
        else
          render_error I18n.t('api.openid_connect.error_page.could_not_authorize'),
                       'Invalid client id or redirect uri'
        end
      end
    
            # Removes the specified cache
        #
        # @param [Array<Hash>] cache_descriptors
        #        An array of caches to remove, each specified with the same
        #        hash as cache_descriptors_per_pod especially :spec_file and :slug
        #
        def remove_caches(cache_descriptors)
          cache_descriptors.each do |desc|
            UI.message('Removing spec #{desc[:spec_file]} (v#{desc[:version]})') do
              FileUtils.rm(desc[:spec_file])
            end
            UI.message('Removing cache #{desc[:slug]}') do
              FileUtils.rm_rf(desc[:slug])
            end
          end
        end
    
      context 'called with three colors' do
    it 'applies second color to left and right' do
      rule = 'border-color: #f00 #0f0 #00f'
    
          expect('.border-style-alternate').to have_rule(rule)
    end
  end
    
      context 'called with one prefix' do
    it 'applies the prefix to the property' do
      rule = '-webkit-appearance: none; ' +
             'appearance: none;'