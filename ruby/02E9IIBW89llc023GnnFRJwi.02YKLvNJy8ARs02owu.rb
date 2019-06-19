
        
              @report_note = current_account.report_notes.new(resource_params)
      @report = @report_note.report
    
      def after_sign_in_path_for(resource)
    if resource.email_verified?
      root_path
    else
      finish_signup_path
    end
  end
end

    
      def export_filename
    '#{controller_name}.csv'
  end
end

    
      private
    
      def remove_duplicates
    where = 'WHERE s1.user_id = s2.user_id AND s1.shareable_id = s2.shareable_id AND '\
      's1.shareable_type = s2.shareable_type AND s1.id > s2.id'
    if AppConfig.postgres?
      execute('DELETE FROM share_visibilities AS s1 USING share_visibilities AS s2 #{where}')
    else
      execute('DELETE s1 FROM share_visibilities s1, share_visibilities s2 #{where}')
    end
  end
end

    
      failure_message_for_should do |actual|
    'expected #{actual.inspect} to have value #{expected.inspect} but was #{actual.value.inspect}'
  end
  failure_message_for_should_not do |actual|
    'expected #{actual.inspect} to not have value #{expected.inspect} but it had'
  end
end
    
        it 'generates the aspects_manage fixture', :fixture => true do
      get :index, params: {a_id: @aspect.id}
      save_fixture(html_for('body'), 'aspects_manage')
    end
    
      context 'called with null values' do
    it 'writes rules for other three' do
      ruleset = 'margin-top: 11px; ' +
                'margin-right: 12px; ' +
                'margin-left: 13px;'
      bad_rule = 'margin-bottom: null;'
    
          expect('.padding-implied-left').to have_rule(rule)
    end
  end