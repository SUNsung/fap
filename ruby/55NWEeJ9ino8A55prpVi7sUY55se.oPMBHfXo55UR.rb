  def recipients(payload = {})
    emails = interpolated(payload)['recipients']
    if emails.present?
      if emails.is_a?(String)
        [emails]
      else
        emails
      end
    else
      [user.email]
    end
  end
    
      module SortableTableHelper
    # :call-seq:
    #   sortable_column(attribute, default_direction = 'desc', name: attribute.humanize)
    def sortable_column(attribute, default_direction = nil, options = nil)
      if options.nil? && (options = Hash.try_convert(default_direction))
        default_direction = nil
      end
      default_direction ||= 'desc'
      options ||= {}
      name = options[:name] || attribute.humanize
      selected = @table_sort_info[:attribute].to_s == attribute
      if selected
        direction = @table_sort_info[:direction]
        new_direction = direction.to_s == 'desc' ? 'asc' : 'desc'
        classes = 'selected #{direction}'
      else
        classes = ''
        new_direction = default_direction
      end
      link_to(name, url_for(sort: '#{attribute}.#{new_direction}'), class: classes)
    end
  end
end

    
      def participation_answer(user)
    poll_participations.find_by(author_id: user.person.id)
  end
    
              render 'admins/pods'
        end
        format.mobile { render 'admins/pods' }
        format.json { render json: pods_json }
      end
    end
    
          def to_boolean(str)
        str.downcase == 'true'
      end
    
          def get_key_from_kid(keys, kid)
        keys.each do |key|
          return key if key.has_value?(kid)
        end
      end
    
          # Prints a title in blue with surrounding newlines.
      def title(text)
        # Use $stdout directly to bypass the indentation that our `puts` does.
        $stdout.puts(color.colorize('\n#{text}\n', :blue))
      end
    
        def exit_deploy_because_of_exception(ex)
      warn t(:deploy_failed, ex: ex.message)
      invoke 'deploy:failed'
      exit(false)
    end
    
          def redirect(env)
        request = Request.new(env)
        warn env, 'attack prevented by #{self.class}'
        [302, {'Content-Type' => 'text/html', 'Location' => request.path}, []]
      end
    
      subject { described_class.new(lambda {}) }
    
      it 'should set the X-Frame-Options' do
    expect(get('/', {}, 'wants' => 'text/html').headers['X-Frame-Options']).to eq('SAMEORIGIN')
  end
    
      %w(GET HEAD POST PUT DELETE).each do |method|
    it 'accepts #{method} requests with no Origin' do
      expect(send(method.downcase, '/')).to be_ok
    end
  end