
        
                # Get the first part of the email address (before @)
        # In addtion in removes illegal characters
        def generate_username(email)
          email.match(/^[^@]*/)[0].mb_chars.normalize(:kd).gsub(/[^\x00-\x7F]/, '').to_s
        end
    
            case AccessTokenValidationService.new(access_token, request: request).validate(scopes: scopes)
        when AccessTokenValidationService::INSUFFICIENT_SCOPE
          raise InsufficientScopeError.new(scopes)
        when AccessTokenValidationService::EXPIRED
          raise ExpiredError
        when AccessTokenValidationService::REVOKED
          raise RevokedError
        end
      end
    
          def perform(start_id, stop_id)
        update = '
          latest_merge_request_diff_id = (
            SELECT MAX(id)
            FROM merge_request_diffs
            WHERE merge_requests.id = merge_request_diffs.merge_request_id
          )'.squish
    
          def to_html
        link_to(image_tag(image_url, alt: title), link_url)
      end
    
            def value_text
          STATUS_RENAME[@status.to_s] || @status.to_s
        end
    
          maker.channel.links.new_link do |link|
        link.rel = 'alternate'
        link.href = 'https://devdocs.io/'
        link.type = 'text/html'
      end
    
        def as_json
      { entries: entries_as_json, types: types_as_json }
    end
    
      def collection_presenter
    ActivityPub::CollectionPresenter.new(
      id: account_collection_url(@account, params[:id]),
      type: :ordered,
      size: @size,
      items: @statuses
    )
  end
end

    
        def update
      authorize @custom_emoji, :update?
    
      private
    
      def update
    if verify_payload?
      process_salmon
      head 202
    elsif payload.present?
      render plain: signature_verification_failure_reason, status: 401
    else
      head 400
    end
  end
    
      def set_account
    @account = Account.find(params[:id])
  end
end
