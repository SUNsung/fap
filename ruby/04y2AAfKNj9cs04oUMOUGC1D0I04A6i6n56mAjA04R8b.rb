
        
          end
    
    BadgeGrouping.seed do |g|
  g.id = BadgeGrouping::GettingStarted
  g.name = 'Getting Started'
  g.default_position = 10
end
    
        if @filter.save
      redirect_to filters_path
    else
      render action: :new
    end
  end
    
        def destroy
      authorize @report_note, :destroy?
      @report_note.destroy!
      redirect_to admin_report_path(@report_note.report_id), notice: I18n.t('admin.report_notes.destroyed_msg')
    end
    
      def status_finder
    StatusFinder.new(params[:url])
  end
    
      def account_from_topic
    if hub_topic.present? && local_domain? && account_feed_path?
      Account.find_local(hub_topic_params[:username])
    end
  end
    
      def future_expires
    Time.now.utc + lease_seconds_or_default
  end
    
      def existing
    existing_path = select(&File.method(:directory?))
    # return nil instead of empty PATH, to unset environment variables
    existing_path unless existing_path.empty?
  end
    
    module Homebrew
  module_function
    
        unless name
      onoe usage
      exit 1
    end
    
              <% end %>
    
          def escape(object)
        case object
        when Hash   then escape_hash(object)
        when Array  then object.map { |o| escape(o) }
        when String then escape_string(object)
        when Tempfile then object
        else nil
        end
      end
    
          def versions
        i = @versions.size + 1
        @versions.map do |v|
          i -= 1
          { :id        => v.id,
            :id7       => v.id[0..6],
            :num       => i,
            :selected  => @page.version.id == v.id,
            :author    => v.author.name.respond_to?(:force_encoding) ? v.author.name.force_encoding('UTF-8') : v.author.name,
            :message   => v.message.respond_to?(:force_encoding) ? v.message.force_encoding('UTF-8') : v.message,
            :date      => v.authored_date.strftime('%B %d, %Y'),
            :gravatar  => Digest::MD5.hexdigest(v.author.email.strip.downcase),
            :identicon => self._identicon_code(v.author.email),
            :date_full => v.authored_date,
          }
        end
      end
    
          attr_reader :wiki
    
      test 'extracting paths from URLs' do
    assert_nil extract_path('Eye-Of-Sauron')
    assert_equal 'Mordor', extract_path('Mordor/Sauron')
    assert_equal 'Mordor/Sauron', extract_path('Mordor/Sauron/Evil')
  end
    
          before_action :set_content_type
      before_action :load_user
      before_action :authorize_for_order, if: proc { order_token.present? }
      before_action :authenticate_user
      before_action :load_user_roles
    
            def show
          @option_type = Spree::OptionType.accessible_by(current_ability, :read).find(params[:id])
          respond_with(@option_type)
        end
    
            def capture
          perform_payment_action(:capture)
        end
    
            def stock_location
          @stock_location ||= StockLocation.accessible_by(current_ability, :read).find(params[:id])
        end