
        
                  Gitlab::Git
            .diff_line_code(file_path, diff_line.new_pos, diff_line.old_pos)
        end
    
            css('br', 'hr', '.material-icons', '.header-link', '.breadcrumb').remove
    
            if mod
          if name == 'Index'
            return slug.split('/')[1..-2].join('/')
          elsif name == 'Angular'
            return slug.split('/').last.split('-').first
          end
        end
    
      def show
    if subscription.valid?(params['hub.topic'])
      @account.update(subscription_expires_at: future_expires)
      render plain: encoded_challenge, status: 200
    else
      head 404
    end
  end
    
          weeks << {
        week: week.to_time.to_i.to_s,
        statuses: Redis.current.get('activity:statuses:local:#{week_id}') || '0',
        logins: Redis.current.pfcount('activity:logins:#{week_id}').to_s,
        registrations: Redis.current.get('activity:accounts:local:#{week_id}') || '0',
      }
    end
    
      #
  # More advanced []= that does downcase storage.
  #
  def []=(key, value)
    stored = false
    
              sent = 0
          case protocol
          when 'tcp'
            sent = send_request_tcp(req)
          when 'udp'
            sent = send_request_udp(req)
          else
            raise ::RuntimeError, 'Kerberos Client: unknown transport protocol'
          end
    
    module Rex
  module Proto
    module Kerberos
      module Model
        # This class provides a representation of a principal, an asset (e.g., a
        # workstation user or a network server) on a network.
        class Element