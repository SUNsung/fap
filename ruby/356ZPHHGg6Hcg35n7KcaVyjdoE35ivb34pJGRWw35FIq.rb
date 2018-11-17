
        
        end

    
    User.seed do |u|
  u.id = -1
  u.name = 'system'
  u.username = 'system'
  u.username_lower = 'system'
  u.password = SecureRandom.hex
  u.active = true
  u.admin = true
  u.moderator = true
  u.approved = true
  u.trust_level = TrustLevel[4]
end
    
          def versions
        i = @versions.size + 1
        @versions.map do |v|
          i -= 1
          { :id        => v.id,
            :id7       => v.id[0..6],
            :num       => i,
            :author    => v.author.name.respond_to?(:force_encoding) ? v.author.name.force_encoding('UTF-8') : v.author.name,
            :message   => v.message.respond_to?(:force_encoding) ? v.message.force_encoding('UTF-8') : v.message,
            :date      => v.authored_date.strftime('%B %d, %Y'),
            :gravatar  => Digest::MD5.hexdigest(v.author.email.strip.downcase),
            :identicon => self._identicon_code(v.author.email),
            :date_full => v.authored_date,
            :files     => v.stats.files.map { |f,*rest|
              page_path = extract_renamed_path_destination(f)
              page_path = remove_page_extentions(page_path)
              { :file => f,
                :link => '#{page_path}/#{v.id}'
              }
            }
          }
        end
      end
    
          def author
        first = page.last_version
        return DEFAULT_AUTHOR unless first
        first.author.name.respond_to?(:force_encoding) ? first.author.name.force_encoding('UTF-8') : first.author.name
      end
    
    #############################################################################
#
# Custom tasks (add your own tasks here)
#
#############################################################################
    
          def must_specify_api_key
        render 'spree/api/errors/must_specify_api_key', status: 401
      end
    
            def show
          @option_type = Spree::OptionType.accessible_by(current_ability, :read).find(params[:id])
          respond_with(@option_type)
        end
    
            def find_property
          @property = Spree::Property.accessible_by(current_ability, :read).find(params[:id])
        rescue ActiveRecord::RecordNotFound
          @property = Spree::Property.accessible_by(current_ability, :read).find_by!(name: params[:id])
        end
    
              state = @states.last
          respond_with(@states) if stale?(state)
        end