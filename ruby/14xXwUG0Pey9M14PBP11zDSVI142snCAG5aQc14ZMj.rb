
        
            def fetch_app_platform(required: true)
      result = config[:app_platform]
      result ||= FastlaneCore::IpaFileAnalyser.fetch_app_platform(config[:ipa]) if config[:ipa]
      if required
        result ||= UI.input('Please enter the app's platform (appletvos, ios, osx): ')
        UI.user_error!('App Platform must be ios, appletvos, or osx') unless ['ios', 'appletvos', 'osx'].include?(result)
        UI.verbose('App Platform (#{result})')
      end
      return result
    end
  end
end

    
          rows = []
    
          def self.all(filter: {}, includes: nil, limit: nil, sort: nil)
        resps = Spaceship::ConnectAPI.get_devices(filter: filter, includes: includes).all_pages
        return resps.map(&:to_models).flatten
      end
    end
  end
end

    
          def get_type
        return if root_page?
    
            doc
      end
    end
  end
end

    
          # Some providers have a lot (> 100) entries, which makes browsing them unwieldy.
      # Any present in the list below will have an extra set of types added, breaking the pages out into the different
      # products they offer.
      LARGE_PROVIDERS = {
        'aws'     => true,
        'azurerm' => true,
        'google'  => true,
      }
    
            css('a[name]').each do |node|
          node['id'] = node['name']
          node.remove_attribute('name')
        end
    
        return true unless resource&.otp_required_for_login?
    
          def handle_prompt(prompt, auth)
        if prompt.include? 'select_account'
          handle_params_error('account_selection_required',
                              'There is no support for choosing among multiple accounts')
        elsif prompt.include? 'consent'
          request_authorization_consent_form
        else
          handle_authorization_form(auth)
        end
      end
    
      def contacts_by_aspect(aspect_id)
    contacts = current_user.contacts.arel_table
    aspect_memberships = AspectMembership.arel_table
    current_user.contacts.joins(
      contacts.outer_join(aspect_memberships).on(
        aspect_memberships[:aspect_id].eq(aspect_id).and(
          aspect_memberships[:contact_id].eq(contacts[:id])
        )
      ).join_sources
    )
  end
    
    #   Copyright (c) 2010-2012, Diaspora Inc.  This file is
#   licensed under the Affero General Public License version 3 or later.  See
#   the COPYRIGHT file.
    
          it 'sets the description' do
        post '/users/api_secrets', params: { api_secret: valid_params }
        expect(user.api_secrets.last.description).to eq valid_params[:description]
      end
    
        if BufferUpdate.where(body_text: body_text, article_id: article_id, tag_id: tag_id, social_service_name: social_service_name).
        where('created_at > ?', 2.minutes.ago).any?
      errors.add(:body_text, '\'#{body_text}\' has already been submitted very recently')
    end
  end
end

    
      # Never trust parameters from the scary internet, only allow a subset to go through.
  def user_params
    accessible = %i[
      email
      shipping_name
      shipping_company
      shipping_address
      shipping_address_line_2
      shipping_city
      shipping_state
      shipping_country
      shipping_postal_code
      shipping_validated
      top_languages
      experience_level
      specialty
      tabs_or_spaces
      onboarding_package_requested
      onboarding_package_form_submmitted_at
      personal_data_updated_at
      shirt_size
      shirt_gender
    ]
    params.require(:user).permit(accessible)
  end
    
        def URIEncodeSingle(cc, result, index)
      x = (cc >> 12) & 0xF;
      y = (cc >> 6) & 63;
      z = cc & 63;
      octets = Array.new(3);
      if (cc <= 0x007F)
        octets[0] = cc;
      elsif (cc <= 0x07FF)
        octets[0] = y + 192;
        octets[1] = z + 128;
      else
        octets[0] = x + 224;
        octets[1] = y + 128;
        octets[2] = z + 128;
      end
      return URIEncodeOctets(octets, result, index);
    end
    
        end
  end
end

    
    # Disable the metadata feature
$METADATA = false
    
        # Test page_header_from_content(@content)
    actual = @view.title
    assert_equal '1 & 2', actual
  end
    
            expect(project.startup_pane).to eq('sample:0.1')
      end
    end
    
        # This method was defined as something of a workaround...  Previously
    # the conditional contained within was in the executable (i.e.
    # bin/tmuxinator).  It has been moved here so as to be testable. A couple
    # of notes:
    # - ::start (defined in Thor::Base) expects the first argument to be an
    # array or ARGV, not a varargs.  Perhaps ::bootstrap should as well?
    # - ::start has a different purpose from #start and hence a different
    # signature
    def self.bootstrap(args = [])
      name = args[0] || nil
      if args.empty? && Tmuxinator::Config.local?
        Tmuxinator::Cli.new.local
      elsif name && !Tmuxinator::Cli::RESERVED_COMMANDS.include?(name) &&
            Tmuxinator::Config.exists?(name: name)
        Tmuxinator::Cli.new.start(name, *args.drop(1))
      else
        Tmuxinator::Cli.start(args)
      end
    end
  end
end

    
        context '$TMUXINATOR_CONFIG specified' do
      it 'only deletes projects in that directory' do
        allow(ENV).to receive(:[]).and_call_original
        allow(ENV).to receive(:[]).with('TMUXINATOR_CONFIG').and_return 'dir'
        allow(File).to receive(:directory?).with('dir').and_return true
        expect(FileUtils).to receive(:remove_dir).once.with('dir')
        expect(FileUtils).to receive(:remove_dir).never
        capture_io { cli.start }
      end
    end
  end