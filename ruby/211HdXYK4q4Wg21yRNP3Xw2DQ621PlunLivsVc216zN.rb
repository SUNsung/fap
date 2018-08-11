
        
          belongs_to :status_message
  has_many :poll_answers, -> { order 'id ASC' }, dependent: :destroy
  has_many :poll_participations, dependent: :destroy
  has_one :author, through: :status_message
    
          if status.is_a? Symbol
        pod.status = Pod::CURL_ERROR_MAP.fetch(status, :unknown_error)
        pod.error = 'FederationError: #{status}'
      elsif status >= 200 && status < 300
        pod.status = :no_errors unless Pod.statuses[pod.status] == Pod.statuses[:version_failed]
      else
        pod.status = :http_failed
        pod.error = 'FederationError: HTTP status code was: #{status}'
      end
      pod.update_offline_since