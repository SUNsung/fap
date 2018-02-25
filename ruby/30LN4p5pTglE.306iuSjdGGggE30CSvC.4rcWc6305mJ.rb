
        
            can?(current_user, ability_name, resource)
  end
    
        if registration
      u2f.authenticate!(challenges, response, Base64.decode64(registration.public_key), registration.counter)
      registration.update(counter: response.counter)
      true
    end
  rescue JSON::ParserError, NoMethodError, ArgumentError, U2F::Error
    false
  end
end

    
    html_readme = '<html>#{Kramdown::Document.new(open('README.md').read).to_html}</html>'
readme_doctree = REXML::Document.new(html_readme)
links = REXML::XPath.match(readme_doctree, '//a')
    
        private
    
        def subpath_to(url, options = nil)
      url = self.class.parse(url)
      return unless origin == url.origin
    
              node.css('> ul > li > a').each do |link|
            n = link.content
            next if n.start_with?('Ex: ') || n.start_with?('Default ') || n =~ /example/i || IGNORE_ENTRIES.include?(n)
            id = link['href'].remove('#')
            n.downcase!
            n.prepend '#{name}: '
            entries << [n, id]
          end
        end
    
          it 'renders application layout' do
        get :show, params: { id: 'test', max_id: late.id }
        expect(response).to render_template layout: 'application'
      end
    end
    
          format.json do
        render json: collection_presenter,
               serializer: ActivityPub::CollectionSerializer,
               adapter: ActivityPub::Adapter,
               content_type: 'application/activity+json'
      end
    end
  end
    
        attributes :type, :media_type, :url, :name
    
          expect(response).to redirect_to(settings_notifications_path)
      user.reload
      expect(user.settings['notification_emails']['follow']).to be true
      expect(user.settings['interactions']['must_be_follower']).to be false
    end
  end
end

    
      belongs_to :status_message
  has_many :poll_answers, -> { order 'id ASC' }, dependent: :destroy
  has_many :poll_participations, dependent: :destroy
  has_one :author, through: :status_message
    
        #
    # @param ips [String] IP range(s)
    # @return [true] if actions on ips are allowed.
    # @return [false] if actions are not allowed on ips.
    def allow_actions_on?(ips)
      return true unless limit_to_network
      return true unless boundary
      return true if boundary.empty?
      boundaries = Shellwords.split(boundary)
      return true if boundaries.empty? # It's okay if there is no boundary range after all
      given_range = Rex::Socket::RangeWalker.new(ips)
      return false unless given_range # Can't do things to nonexistant IPs
      allowed = false
      boundaries.each do |boundary_range|
        ok_range = Rex::Socket::RangeWalker.new(boundary)
        allowed  = true if ok_range.include_range? given_range
      end
      return allowed
    end
    
              fd.write(res)
        end
      end
      break
    rescue ::Timeout::Error
      $stderr.puts '#{prefix}#{site} timed out'
    rescue ::Interrupt
      raise $!
    rescue ::Exception => e
      $stderr.puts '#{prefix}#{site} #{e.class} #{e}'
    end
  end
    
            when :err
          case s[:last]
            when :pass
              # Oops got a -ERR after a pass so its crap ignore the pass
              # But report it, might be helpfull for guessing :-)