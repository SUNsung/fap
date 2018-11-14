
        
          </body>
</html>
HTML
    
          it 'ignores '-' sign' do
        format('%2$d', 1, 2, 3).should == '2'
        format('%-2$d', 1, 2, 3).should == '2'
      end
    
        trace_var :$Kernel_trace_var_global, proc {|value| captured = value}
    
    require 'commands'
    
          new_name = name
      new_path = path
      new_remote = default_remote
    
    public_dir      = 'public'    # compiled site directory
source_dir      = 'source'    # source file directory
blog_index_dir  = 'source'    # directory for your blog's index page (if you put your index in source/blog/index.html, set this to 'source/blog')
deploy_dir      = '_deploy'   # deploy directory (for Github pages deployment)
stash_dir       = '_stash'    # directory to stash posts for speedy generation
posts_dir       = '_posts'    # directory for blog files
themes_dir      = '.themes'   # directory for blog files
new_post_ext    = 'markdown'  # default new post file extension when using the new_post task
new_page_ext    = 'markdown'  # default new page file extension when using the new_page task
server_port     = '4000'      # port for preview server eg. localhost:4000
    
          unless file.file?
        return 'File #{file} could not be found'
      end
    
      # Escapes CDATA sections in post content
  def cdata_escape(input)
    input.gsub(/<!\[CDATA\[/, '&lt;![CDATA[').gsub(/\]\]>/, ']]&gt;')
  end