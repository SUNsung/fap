
        
          def failure
    set_flash_message! :alert, :failure, kind: OmniAuth::Utils.camelize(failed_strategy.name), reason: failure_message
    redirect_to after_omniauth_failure_path_for(resource_name)
  end
    
        def reset_password_instructions(record, token, opts={})
      @token = token
      devise_mail(record, :reset_password_instructions, opts)
    end
    
        on :fetch_person_for_hcard do |guid|
      person = Person.where(guid: guid, closed_account: false).where.not(owner: nil).take
      if person
        DiasporaFederation::Discovery::HCard.new(
          guid:             person.guid,
          nickname:         person.username,
          full_name:        '#{person.profile.first_name} #{person.profile.last_name}'.strip,
          url:              AppConfig.pod_uri,
          photo_large_url:  person.image_url,
          photo_medium_url: person.image_url(:thumb_medium),
          photo_small_url:  person.image_url(:thumb_small),
          public_key:       person.serialized_public_key,
          searchable:       person.searchable,
          first_name:       person.profile.first_name,
          last_name:        person.profile.last_name
        )
      end
    end
    
            DiasporaFederation.callbacks.trigger(:save_person_after_webfinger, person)