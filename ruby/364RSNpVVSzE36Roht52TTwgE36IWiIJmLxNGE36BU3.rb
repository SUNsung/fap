
        
                subject.exec
      end
    
          expect(finder.find('test-template')).to be_present
    end
    
      subject(:finder) { described_class.new(project, 'files/', '.html', categories) }
    
      it 'allows user to expand diff' do
    page.within find('[id='2f6fcd96b88b36ce98c38da085c795a27d92a3dd']') do
      click_link 'Click to expand it.'
    
            [query, filters]
      end
    
            def self.default_options
          ::Commit.max_diff_options.merge(ignore_whitespace_change: false, expanded: false, include_stats: true)
        end
    
            uses_from_macos('foo', after: :mojave)
      end
    
          expect(spec.deps.first.name).to eq('foo')
    end
    
        it 'sets itself to be the resource's owner' do
      subject.resource('foo') { url 'foo-1.0' }
      subject.owner = owner
      subject.resources.each_value do |r|
        expect(r.owner).to eq(subject)
      end
    end
    
      describe '#message' do
    its(:message) { is_expected.to match(/Java is required to install this formula./) }
  end
    
          def version
        # may return a version string
        # that is guessed based on the compiler, so do not
        # use it in order to check if Xcode is installed.
        if @version ||= detect_version
          ::Version.new @version
        else
          ::Version::NULL
        end
      end
    
          raise CaskError,
            'Cask #{@cask} depends on hardware architecture being one of ' \
            '[#{@cask.depends_on.arch.map(&:to_s).join(', ')}], ' \
            'but you are running #{@current_arch}'
    end
    
          path = if timestamp == :latest
        Pathname.glob(metadata_versioned_path(version: version).join('*')).max
      else
        timestamp = new_timestamp if timestamp == :now
        metadata_versioned_path(version: version).join(timestamp)
      end
    
          order.payments.with_state('checkout').where.not(id: id).each do |payment|
        payment.invalidate! unless payment.store_credit?
      end
    end
  end
end

    
              order.create_proposed_shipments unless shipments_attrs.present?
    
          order.reload.next!
      order.update_with_updater!
      order.finalize!
    
        (all_reception_statuses - ['awaiting']).each do |invalid_transition_status|
      context 'return_item has a reception status of #{invalid_transition_status}' do
        it_behaves_like 'an invalid state transition', invalid_transition_status, 'received'
      end
    end
  end
    
            def show
          authorize! :show, @order, order_token
          @address = find_address
          respond_with(@address)
        end
    
            def show
          @option_type = Spree::OptionType.accessible_by(current_ability, :show).find(params[:id])
          respond_with(@option_type)
        end
    
            def perform_payment_action(action, *args)
          authorize! action, Payment
          @payment.send('#{action}!', *args)
          respond_with(@payment, default_template: :show)
        end
    
          it 'flashes a message containing the token' do
        post '/users/api_secrets', params: { api_secret: valid_params }
        expect(flash[:notice]).to include(ApiSecret.last.secret)
        expect(flash[:error]).to be_nil
      end
    end
    
      def organization
    @user = Organization.find(params[:id]) || not_found
    
      def legacy_article_social_image(article)
    cache_key = 'article-social-img-#{article}-#{article.updated_at}-#{article.comments_count}'
    
      def satellite_tweet!
    @article.tags.find_each do |tag|
      BufferUpdate.buff!(@article.id, twitter_buffer_text, tag.buffer_profile_id_code, 'twitter', tag.id) if tag.buffer_profile_id_code.present?
    end
    @article.update(last_buffered: Time.current)
  end
    
            get '/ints', values: 'a b c d'
        expect(last_response.status).to eq(200)
        expect(JSON.parse(last_response.body)).to eq([0, 0, 0, 0])
      end
    
                namespace_stackable(:params, name[:full_name].to_s => opts)
          end
        end
      end
    end
  end
end
