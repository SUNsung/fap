
        
            def show
      authorize @user, :change_email?
    end
    
        def create
      authorize ReportNote, :create?
    
    When /^(?:|I )press '([^']*)'$/ do |button|
  click_button(button)
end
    
        def cropping dst, ratio, scale
      if ratio.horizontal? || ratio.square?
        '%dx%d+%d+%d' % [ dst.width, dst.height, 0, (self.height * scale - dst.height) / 2 ]
      else
        '%dx%d+%d+%d' % [ dst.width, dst.height, (self.width * scale - dst.width) / 2, 0 ]
      end
    end