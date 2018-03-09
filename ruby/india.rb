
        
            attr_accessor :name, :type, :path
    
        def request_one(url)
      Response.new read_file(file_path_for(url)), URL.parse(url)
    end
    
            css('h2:not([id]) a[id]:not([href])').each do |node|
          node.parent['id'] = node['id']
          node.before(node.children).remove
        end
    
            css('[id]').each do |node|
          # Module
          if node.name == 'h2'
            type = node.content.remove 'Backbone.'
            if type.capitalize! # sync, history
              entries << [node.content, node['id'], type]
            end
            next
          end
    
            %w(modals dropdowns scrollspy tabs tooltips popovers alerts buttons collapse carousel affix).each do |dom_id|
          css('##{dom_id}-options + p + div tbody td:first-child').each do |node|
            name = node.content.strip
            id = node.parent['id'] = '#{dom_id}-#{name.parameterize}-option'
            name.prepend '#{dom_id.singularize.titleize}: '
            name << ' (option)'
            entries << [name, id]
          end
    
        assert_raise(ArgumentError) {
      set.superset?([2])
    }
    
      it 'decodes the number of bytes specified by the count modifier including whitespace bytes' do
    [ ['a bc',  ['a b', 'c']],
      ['a\fbc', ['a\fb', 'c']],
      ['a\nbc', ['a\nb', 'c']],
      ['a\rbc', ['a\rb', 'c']],
      ['a\tbc', ['a\tb', 'c']],
      ['a\vbc', ['a\vb', 'c']]
    ].should be_computed_by(:unpack, unpack_format(3)+unpack_format)
  end
    
      it 'decodes UTF-8 max codepoints' do
    [ ['\xf0\x90\x80\x80', [0x10000]],
      ['\xf3\xbf\xbf\xbf', [0xfffff]],
      ['\xf4\x80\x80\x80', [0x100000]],
      ['\xf4\x8f\xbf\xbf', [0x10ffff]]
    ].should be_computed_by(:unpack, 'U')
  end
    
      class Apple < Struct; end
    
      attributes :id, :type, :url, :preview_url,
             :remote_url, :text_url, :meta,
             :description
    
            expect(response).to have_http_status(:missing)
      end
    end
  end
end

    
      attributes :id, :type, :name, :updated
    
      describe 'PUT #update' do
    it 'updates notifications settings' do
      user.settings['notification_emails'] = user.settings['notification_emails'].merge('follow' => false)
      user.settings['interactions'] = user.settings['interactions'].merge('must_be_follower' => true)
    
    GEMFILE_EXTENSIONS = [
    '.local',
    ''
]
    
    
signer._invoke('KeyToolMSF','[Ljava.lang.String;',keytoolOpts)
    
    	def parse_line(line)
		if line =~ /\w+ <[\.\w]+>:/
			# End a previous block
			unless block_size == 0
				block_end
			end
			block_begin(line)
    
        # Provide a wrapper for the SCM that loads a strategy for the user.
    #
    # @param [Rake] context     The context in which the strategy should run
    # @param [Module] strategy  A module to include into the SCM instance. The
    #    module should provide the abstract methods of Capistrano::SCM
    #
    def initialize(context, strategy)
      @context = context
      singleton = class << self; self; end
      singleton.send(:include, strategy)
    end
    
          describe 'fetching all release servers' do
        context 'with no additional options' do
          subject { dsl.release_roles(:all) }
    
      public
  def close; end;