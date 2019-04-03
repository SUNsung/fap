
        
          # Setup a color scheme called 'bright' than can be used to add color codes
  # to the pattern layout. Color schemes should only be used with appenders
  # that write to STDOUT or STDERR; inserting terminal color codes into a file
  # is generally considered bad form.
  Logging.color_scheme('bright',
                       levels:  {
                         info:  :green,
                         warn:  :yellow,
                         error: :red,
                         fatal: %i(white on_red)
                       },
                       date:    :blue,
                       logger:  :cyan,
                       message: :magenta
                      )
    
    When /^(?:|I )click on '([^']*)' navbar title$/ do |title|
  with_scope('.info-bar') do
    find('h5', text: title).click
  end
end

    
    World(NavigationHelpers)

    
          it 'assigns @user' do
        get :create, params: valid_params
        expect(assigns(:user)).to be_truthy
      end
    
          # Returns the delta between this pair's key and the argument pair's.
      #
      # @note Keys on the same line always return a delta of 0
      # @note Keyword splats always return a delta of 0 for right alignment
      #
      # @param [Symbol] alignment whether to check the left or right side
      # @return [Integer] the delta between the two keys
      def key_delta(other, alignment = :left)
        HashElementDelta.new(self, other).key_delta(alignment)
      end
    
          # Returns the index of the `when` branch within the `case` statement.
      #
      # @return [Integer] the index of the `when` branch
      def branch_index
        parent.when_branches.index(self)
      end