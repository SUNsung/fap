
        
          describe '#highlighted?' do
    it 'understands hl=6-8' do
      stub(params).[](:hl) { '6-8' }
      expect((1..10).select { |i| highlighted?(i) }).to eq [6, 7, 8]
    end
    
    describe JobsHelper do
  let(:job) { Delayed::Job.new }
    
          expect(@scheduler.scheduler_agent_jobs.map(&:scheduler_agent).sort_by(&:id)).to eq([@agent1, @agent2])
    end
    
      context '#parse_duration' do
    it 'works with correct arguments' do
      expect(Utils.parse_duration('2.days')).to eq(2.days)
      expect(Utils.parse_duration('2.seconds')).to eq(2)
      expect(Utils.parse_duration('2')).to eq(2)
    end
    
        @checker = Agents::BasecampAgent.new(:name => 'somename', :options => @valid_params)
    @checker.service = services(:generic)
    @checker.user = users(:jane)
    @checker.save!
    
    class Ray
  def initialize(org, dir)
    @org = org
    @dir = dir
  end
    
        it 'lets a user destroy their like' do
      current_user = controller.send(:current_user)
      expect(current_user).to receive(:retract).with(@like)
    
    Given /^(?:|I )am on (.+)$/ do |page_name|
  visit path_to(page_name)
end
    
        def definitions_for(klass)
      parent_classes = klass.ancestors.reverse
      parent_classes.each_with_object({}) do |ancestor, inherited_definitions|
        inherited_definitions.deep_merge! @attachments[ancestor]
      end
    end
  end
end

    
        # Returns the extension of the file. e.g. 'jpg' for 'file.jpg'
    # If the style has a format defined, it will return the format instead
    # of the actual extension.
    def extension attachment, style_name
      ((style = attachment.styles[style_name.to_s.to_sym]) && style[:format]) ||
        File.extname(attachment.original_filename).sub(/\A\.+/, ''.freeze)
    end