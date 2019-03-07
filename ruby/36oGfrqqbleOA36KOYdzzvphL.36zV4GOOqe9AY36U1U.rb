
        
            group = Group.create!(name: 'bob')
    group.add(moderator)
    group.save
    
        def current_url
      context[:url]
    end
    
          def process_url?(url)
        base_urls.any? { |base_url| base_url.contains?(url) }
      end
    
      describe '#casks' do
    it 'returns an empty array if there is no match' do
      expect(subject.casks).to eq []
    end
  end
    
      it 'accepts and uses a seed of 0' do
    srand(0)
    srand.should == 0
  end
    
    describe 'Kernel#system' do
  it 'is a private method' do
    Kernel.should have_private_instance_method(:system)
  end