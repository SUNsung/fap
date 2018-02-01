
        
          private
    
              subtree, file = File.split(object['path'])
    
          it 'renders application layout' do
        get :show, params: { id: 'test', max_id: late.id }
        expect(response).to render_template layout: 'application'
      end
    end
    
      def set_account
    @account = Account.find(params[:id])
  end
    
          expect('.border-color-explicit').to have_rule(rule)
    end
  end
    
      context 'called with three sizes' do
    it 'applies second width to left and right' do
      ruleset = 'position: relative; ' +
                'top: 4px; ' +
                'right: 5px; ' +
                'bottom: 6px; ' +
                'left: 5px;'
    
      context 'called with one prefix' do
    it 'applies the prefix to the property' do
      rule = '-webkit-appearance: none; ' +
             'appearance: none;'