
        
            # note, hashes should remain stable even if emoji changes cause text content is hashed
    expect(n cooked).to eq(n expected)
    
        render json: success_json
  end
    
        it 'increases flags_agreed when agreed' do
      expect(user.user_stat.flags_agreed).to eq(0)
      reviewable.perform(Discourse.system_user, :agree_and_keep)
      expect(user.user_stat.reload.flags_agreed).to eq(1)
    end
    
          ensure_cors!
      presigned_url(obj, :put, UPLOAD_URL_EXPIRES_AFTER_SECONDS)
    rescue Aws::Errors::ServiceError => e
      Rails.logger.warn('Failed to generate upload URL for S3: #{e.message.presence || e.class.name}')
      raise StorageError
    end
    
          it 'should not store file as jpeg if it does not meet absolute byte saving requirements' do
    
        if text = I18n.t('reviewables.reasons.#{object.reason}', base_url: Discourse.base_url, default: nil)
      # Create a convenient link to any site settings if the user is staff
      settings_url = '#{Discourse.base_url}/admin/site_settings/category/all_results?filter='
    
            def create
          authorize! :create, Image
          @image = scope.images.new(image_params)
          if @image.save
            respond_with(@image, status: 201, default_template: :show)
          else
            invalid_resource!(@image)
          end
        end
    
            def new; end