
        
            it 'accepts jsfiddle link with a custom-tab parameter' do
      expect do
        generate_new_liquid(jsfiddle_link_with_custom_tabs)
      end.not_to raise_error
    end
    
      def permitted_attributes_for_update
    %i[body_markdown receive_notifications]
  end
    
          it 'does not mute the other commenter's comments in the same thread' do
        results = parent_comment_by_og.subtree.where(user: other_commenter).pluck(:receive_notifications)
        expect(results.uniq).to eq [true]
      end
    end
  end
end
