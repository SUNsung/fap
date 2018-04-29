
        
        class ApplicationSerializer < ActiveModel::Serializer
  embed :ids, include: true
    
      def create
    return render_404 unless can_read?(resource)
    
        groups
  end
end

    
        find_union(segments, Project).includes(:namespace).order_id_desc
  end
    
      def parse(pkt)
    # We want to return immediantly if	we do not have a packet which is handled by us
    return unless pkt.is_tcp?
    return if (pkt.tcp_sport != 80 and pkt.tcp_dport != 80)
    s = find_session((pkt.tcp_sport == 80) ? get_session_src(pkt) : get_session_dst(pkt))
    
    require 'rex/post/meterpreter'
    
    codez = Array.new
    
    class Poll < ApplicationRecord
  include Diaspora::Federated::Base
  include Diaspora::Fields::Guid
    
          respond_with do |format|
        format.html do
          gon.preloads[:pods] = pods_json
          gon.unchecked_count = Pod.unchecked.count
          gon.version_failed_count = Pod.version_failed.count
          gon.error_count = Pod.check_failed.count
    
      def percent_change(today, yesterday)
    sprintf( '%0.02f', ((today-yesterday) / yesterday.to_f)*100).to_f
  end
    
          def to_boolean(str)
        str.downcase == 'true'
      end
    
          rescue_from Rack::OAuth2::Server::Authorize::BadRequest,
                  JSON::JWT::InvalidFormat, JSON::JWK::UnknownAlgorithm do |e|
        logger.info e.backtrace[0, 10].join('\n')
        render json: {error: :invalid_request, error_description: e.message, status: 400}
      end
      rescue_from JSON::JWT::VerificationFailed do |e|
        logger.info e.backtrace[0, 10].join('\n')
        render json: {error: :invalid_grant, error_description: e.message, status: 400}
      end
    end
  end
end
