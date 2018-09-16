
        
                    case options[:default]
            when nil
              Time.current
            when Date, Time
              options[:default]
            else
              default = options[:default].dup
    
        include ActionView::Rendering
    
        group = Group.create!(name: 'bob')
    group.add(moderator)
    group.save
    
    # User for the smoke tests
if ENV['SMOKE'] == '1'
  UserEmail.seed do |ue|
    ue.id = 0
    ue.email = 'smoke_user@discourse.org'
    ue.primary = true
    ue.user_id = 0
  end
    
        Category.transaction do
      lounge.group_names = ['trust_level_3']
      unless lounge.save
        puts lounge.errors.full_messages
        raise 'Failed to set permissions on trust level 3 lounge category!'
      end
    
            # Reset topic count because we don't count the description topic
        DB.exec 'UPDATE categories SET topic_count = 0 WHERE id = #{staff.id}'
      end
    end
  end
end

    
        def insert(index, *names)
      @filters.insert assert_index(index), *filter_const(names)
    end
    
        def parse_as_document
      document = Nokogiri::HTML.parse @content, nil, 'UTF-8'
      @title = document.at_css('title').try(:content)
      document
    end
    
        def html?
      mime_type.include? 'html'
    end