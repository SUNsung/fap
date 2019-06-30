
        
        # == Schema Information
#
# Table name: drafts
#
#  id         :integer          not null, primary key
#  user_id    :integer          not null
#  draft_key  :string           not null
#  data       :text             not null
#  created_at :datetime         not null
#  updated_at :datetime         not null
#  sequence   :integer          default(0), not null
#  revisions  :integer          default(1), not null
#
# Indexes
#
#  index_drafts_on_user_id_and_draft_key  (user_id,draft_key)
#

    
        def worker_src
      [
        :self,
        :blob, # ACE editor registers a service worker with a blob for syntax checking
      ]
    end
    
    CSP = ContentSecurityPolicy

    
      def trigger_badges
    BadgeGranter.queue_badge_grant(Badge::Trigger::UserChange, user: self.user)
  end
end
    
          def footer
        if @footer.nil?
          if page = @page.footer
            @footer = page.text_data
          else
            @footer = false
          end
        end
        @footer
      end
    
          def title
        'Home'
      end
    
    ENV['RACK_ENV'] = 'test'
require 'gollum'
require 'gollum/app'
    
      test 'frontend links for editing blocked' do
    Precious::App.set(:wiki_options, { allow_editing: false })
    get '/A'
    
          def preference_field_tag(name, value, options)
        case options[:type]
        when :integer
          text_field_tag(name, value, preference_field_options(options))
        when :boolean
          hidden_field_tag(name, 0, id: '#{name}_hidden') +
            check_box_tag(name, 1, value, preference_field_options(options))
        when :string
          text_field_tag(name, value, preference_field_options(options))
        when :password
          password_field_tag(name, value, preference_field_options(options))
        when :text
          text_area_tag(name, value, preference_field_options(options))
        else
          text_field_tag(name, value, preference_field_options(options))
        end
      end
    
      puts '\n== Restarting application server =='
  system! 'bin/rails restart'
end

    
        def render(context)
      if @img
        '<img #{@img.collect {|k,v| '#{k}=\'#{v}\'' if v}.join(' ')}>'
      else
        'Error processing input, expected syntax: {% img [class name(s)] [http[s]:/]/path/to/image [width [height]] [title text | \'title text\' [\'alt text\']] %}'
      end
    end
  end
end
    
          super
    end
    
    module Jekyll