
        
              if category_names.present?
        category_names.uniq!
        json_response[:forbidden_message] = I18n.t(
          'tags.forbidden.restricted_to',
          count: category_names.count,
          tag_name: tag.name,
          category_names: category_names.join(', ')
        )
      else
        json_response[:forbidden_message] = I18n.t('tags.forbidden.in_this_category', tag_name: tag.name)
      end
    end
    
      def create_backups
    @objects.clear
    
        @history = UserHistory.find(params[:id])
    prev = @history.previous_value
    cur = @history.new_value
    
          record = StaffActionLogger.new(Discourse.system_user)
        .log_theme_change(original_json, theme)
    
    # component must be String
def encodeURIComponent(componentString)
  ::URI::URIEncodeComponent(componentString)
end
    
          def line_class(line)
        if line =~ /^@@/
          'gc'
        elsif line =~ /^\+/
          'gi'
        elsif line =~ /^\-/
          'gd'
        else
          ''
        end
      end
    
          attr_reader :page, :content
    
          def escaped_name
        CGI.escape(@name)
      end
    
          def toc_content
        @toc_content
      end
    
        get '/compare/A/fc66539528eb96f21b2bbdbf557788fe8a1196ac..b26b791cb7917c4f37dd9cb4d1e0efb24ac4d26f'
    
    context 'Precious::Views::Page' do
  setup do
    examples = testpath 'examples'
    @path    = File.join(examples, 'test.git')
    FileUtils.cp_r File.join(examples, 'empty.git'), @path, :remove_destination => true
    @wiki = Gollum::Wiki.new(@path)
  end
    
      class Error < StandardError;
  end