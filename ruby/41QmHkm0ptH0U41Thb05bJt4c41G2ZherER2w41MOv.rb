
        
                  if !matches || !matches[:type]
            raise(
              ArgumentError,
              'The note URL #{note.html_url.inspect} is not supported'
            )
          end
    
            # Builds a user from a GitHub API response.
        #
        # user - An instance of `Sawyer::Resource` containing the user details.
        def self.from_api_response(user)
          new(id: user.id, login: user.login)
        end
    
        def add_entry(entry)
      if @index.add?(entry.as_json.to_s)
        @entries << entry.dup
        @types[entry.type].count += 1 if entry.type
      end
    end
    
        def format_url(url)
      url.to_s.remove %r{\Ahttps?://}
    end
    
            if mod
          if name == 'Index'
            return slug.split('/')[1..-2].join('/')
          elsif name == 'Angular'
            return slug.split('/').last.split('-').first
          end
        end
    
      def maxheight_or_default
    params[:maxheight].present? ? params[:maxheight].to_i : nil
  end
end

    
      def process_salmon
    SalmonWorker.perform_async(@account.id, payload.force_encoding('UTF-8'))
  end
end

    
        render_empty
  end
    
      def self.provides_callback_for(provider)
    provider_id = provider.to_s.chomp '_oauth2'
    
      included do
    before_action :set_rate_limit_headers, if: :rate_limited_request?
  end
    
          def left_diff_line_number(id, line)
        if line =~ /^@@/
          m, li                  = *line.match(/\-(\d+)/)
          @left_diff_line_number = li.to_i
          @current_line_number   = @left_diff_line_number
          ret                    = '...'
        elsif line[0] == ?-
          ret                    = @left_diff_line_number.to_s
          @left_diff_line_number += 1
          @current_line_number   = @left_diff_line_number - 1
        elsif line[0] == ?+
          ret = ' '
        else
          ret                    = @left_diff_line_number.to_s
          @left_diff_line_number += 1
          @current_line_number   = @left_diff_line_number - 1
        end
        ret
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
    
          def toc_content
        @toc_content
      end
    
      s.name              = 'gollum'
  s.version           = '4.1.4'
  s.date              = '2018-10-01'
  s.rubyforge_project = 'gollum'
  s.license           = 'MIT'