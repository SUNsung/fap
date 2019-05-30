
        
          describe '.seed' do
    it 'imports a set of agents to get the user going when they are first created' do
      expect { DefaultScenarioImporter.seed(user) }.to change(user.agents, :count).by(7)
    end
    
      after :each do
    @scheduler.shutdown(:wait)
    
      describe 'path request must exist' do
    it 'should check that validation added if path does not exist' do
      opts = @opts.tap { |o| o.delete('path') }
      @checker = Agents::AftershipAgent.new(:name => 'tectonic', :options => opts)
      @checker.user = users(:bob)
      expect(@checker.save).to eq false
      expect(@checker.errors.full_messages.first).to eq('You need to specify a path request')
    end
  end
    
        it 'accepts jsfiddle link' do
      liquid = generate_new_liquid(jsfiddle_link)
      rendered_jsfiddle_iframe = liquid.render
      Approvals.verify(rendered_jsfiddle_iframe, name: 'jsfiddle_liquid_tag', format: :html)
    end
    
          it 'mutes all of the original commenter's comments in a single thread' do
        user_ids_of_muted_comments = Comment.where(receive_notifications: false).pluck(:user_id)
        expect(user_ids_of_muted_comments.uniq).to eq [original_commenter.id]
      end
    
      def update
    @broadcast = Broadcast.find(params[:id])
    @broadcast.update(broadcast_params)
    redirect_to '/internal/broadcasts'
  end