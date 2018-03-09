
        
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

    
        respond_to do |format|
      format.html { redirect_back events_path, notice: 'Event deleted.' }
      format.json { head :no_content }
    end
  end
    
        respond_to do |format|
      format.html { redirect_to services_path }
      format.json { render json: @service }
    end
  end
end

    
        private
    
          def get_type
        case slug
        when 'api'
          'Reference'
        when 'configuration'
          'Reference: Configuration'
        when 'stpl'
          'Reference: SimpleTemplate'
        when 'plugindev'
          'Reference: Plugin'
        else
          'Manual'
        end
      end
    
        assert_not_operator(h1, :>, h1)
    assert_not_operator(h1, :>, h2)
    assert_not_operator(h2, :>, h1)
    assert_not_operator(h2, :>, h2)
  end
    
      def test_time_time()
    assert_equal(Time.utc(2000, 3, 21, 3, 30)  \
                -Time.utc(2000, 3, 21, 0, 30), 3*3600)
    assert_equal(Time.utc(2000, 3, 21, 0, 30)  \
                -Time.utc(2000, 3, 21, 3, 30), -3*3600)
  end
    
      it 'returns empty strings for repeated formats if the input is empty' do
    ''.unpack(unpack_format(nil, 3)).should == ['', '', '']
  end
    
      it 'decodes UTF-8 BMP codepoints' do
    [ ['\xc2\x80',      [0x80]],
      ['\xdf\xbf',      [0x7ff]],
      ['\xe0\xa0\x80',  [0x800]],
      ['\xef\xbf\xbf',  [0xffff]]
    ].should be_computed_by(:unpack, 'U')
  end
    
        run.should be_true
  end
    
      def_delegators :@logger, :log, :log_status, :log_processing, :log_transform, :log_file_info, :log_processed, :log_http_get_file, :log_http_get_files, :silence_log