
        
          def save_and_refresh_staff_groups!
    transaction do
      self.save!
      Group.refresh_automatic_groups!(:admins, :moderators, :staff)
    end
  end
    
      context 'called with four sizes' do
    it 'applies different widths to all sides' do
      rule = 'padding: 7px 8px 9px 10px'
    
      context 'called with three sizes' do
    it 'applies second width to left and right' do
      ruleset = 'position: relative; ' +
                'top: 4px; ' +
                'right: 5px; ' +
                'bottom: 6px; ' +
                'left: 5px;'
    
      context 'called with no prefixes' do
    it 'outputs the spec' do
      rule = 'appearance: none;'